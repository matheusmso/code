set expandtab
set shiftwidth=4
set softtabstop=4
filetype plugin indent on
syntax on

set number
set relativenumber

autocmd BufNewFile *.cpp :0r ~/dev/code/templates/template.cpp
autocmd BufNewFile *.cpp +9
autocmd BufNewFile *.tex :0r ~/dev/code/templates/template.tex
autocmd BufNewFile *.tex +73
