set cindent
set ruler
set nu

set hlsearch "검색어 하이라이팅
set incsearch
set showmatch
set autoindent
set smartcase

syntax on

set shiftwidth=4
set tabstop=4
set smartindent
set bs=eol,start,indent


set nocompatible 
filetype off 
set rtp+=~/.vim/bundle/Vundle.vim 

call vundle#begin() 
Plugin 'gmarik/Vundle.vim' "required
Plugin 'tpope/vim-fugitive' "required 
Plugin 'scrooloose/syntastic'
Plugin 'Shougo/neocomplcache.vim'
Plugin 'nathanaelkane/vim-indent-guides'

call vundle#end()            
filetype plugin indent on " Put your non-Plugin stuff after this line


" Syntax Highlighting
if has("syntax")
	syntax on
endif



" 마지막으로 수정된 곳에 커서를 위치함
au BufReadPost *
\ if line("'\"") > 0 && line("'\"") <= line("$") |
\ exe "norm g`\"" |
\ endif


set laststatus=2 " 상태바 표시를 항상한다
set statusline=\ %<%l:%v\ [%P]%=%a\ %h%m%r\ %F\


" 파일 인코딩을 한국어로
if $LANG[0]=='k' && $LANG[1]=='o'
set fileencoding=korea
endif

colorscheme jellybeans
