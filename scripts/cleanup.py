import os
import shutil

for f in os.listdir("."):
    if f[-1:] == 'y':
        continue
    if not os.path.exists(f[:-5]):
        os.makedirs(f[:-5])
    shutil.move(f, f[:-5]+"/"+f[-5:-4]+".cpp")

