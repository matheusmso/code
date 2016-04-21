#include <bits/stdc++.h>
using namespace std;
class Time {
	public:
	string whatTime(int seconds) {
            int hours = seconds / 3600;
            seconds %= 3600;
            int minutes = seconds / 60;
            seconds %= 60;
            int i;
	char a[8];
        if (hours > 9) {
            a[1] = hours%10 + '0';
            hours /= 10;
            a[0] = hours + '0';
            a[2] = ':';
        }
        else {
            a[0] = hours + '0';
            a[1] = ':';
        }
        for (i = 0; a[i] != ':'; i++);
        i++;
        if (minutes > 9) {
            a[i+1] = minutes%10 + '0';
            minutes /= 10;
            a[i] = minutes + '0';
            a[i+2] = ':';
        }
        else {
            a[i] = minutes + '0';
            a[i+1] = ':';
        }
        for (; a[i] != ':'; i++);
        i++;
        if (seconds > 9) {
            a[i+1] = seconds%10 + '0';
            seconds /= 10;
            a[i] = seconds + '0';
            a[i+2] = '\0';
        }
        else {
            a[i] = seconds + '0';
            a[i+1] = '\0';
        }
        string s = a;
        return s;
	}
};

// BEGIN CUT HERE
#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
namespace moj_harness {
	using std::string;
	using std::vector;
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				std::cerr << "Illegal input! Test case " << casenum << " does not exist." << std::endl;
			}
			return;
		}
		
		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}
		
		if (total == 0) {
			std::cerr << "No test cases run." << std::endl;
		} else if (correct < total) {
			std::cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << std::endl;
		} else {
			std::cerr << "All " << total << " tests passed!" << std::endl;
		}
	}
	
	int verify_case(int casenum, const string &expected, const string &received, std::clock_t elapsed) { 
		std::cerr << "Example " << casenum << "... "; 
		
		string verdict;
		vector<string> info;
		char buf[100];
		
		if (elapsed > CLOCKS_PER_SEC / 200) {
			std::sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}
		
		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}
		
		std::cerr << verdict;
		if (!info.empty()) {
			std::cerr << " (";
			for (size_t i=0; i<info.size(); ++i) {
				if (i > 0) std::cerr << ", ";
				std::cerr << info[i];
			}
			std::cerr << ")";
		}
		std::cerr << std::endl;
		
		if (verdict == "FAILED") {
			std::cerr << "    Expected: \"" << expected << "\"" << std::endl; 
			std::cerr << "    Received: \"" << received << "\"" << std::endl; 
		}
		
		return verdict == "PASSED";
	}

	int run_test_case(int casenum__) {
		switch (casenum__) {
		case 0: {
			int seconds               = 0;
			string expected__         = "0:0:0";

			std::clock_t start__      = std::clock();
			string received__         = Time().whatTime(seconds);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 1: {
			int seconds               = 3661;
			string expected__         = "1:1:1";

			std::clock_t start__      = std::clock();
			string received__         = Time().whatTime(seconds);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 2: {
			int seconds               = 5436;
			string expected__         = "1:30:36";

			std::clock_t start__      = std::clock();
			string received__         = Time().whatTime(seconds);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}
		case 3: {
			int seconds               = 86399;
			string expected__         = "23:59:59";

			std::clock_t start__      = std::clock();
			string received__         = Time().whatTime(seconds);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 4: {
			int seconds               = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = Time().whatTime(seconds);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 5: {
			int seconds               = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = Time().whatTime(seconds);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			int seconds               = ;
			string expected__         = ;

			std::clock_t start__      = std::clock();
			string received__         = Time().whatTime(seconds);
			return verify_case(casenum__, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}

#include <cstdlib>
int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(std::atoi(argv[i]));
	}
}
// END CUT HERE
