set cindent
set ruler
set nu

set hlsearch "�˻��� ���̶�����
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



" ���������� ������ ���� Ŀ���� ��ġ��
au BufReadPost *
\ if line("'\"") > 0 && line("'\"") <= line("$") |
\ exe "norm g`\"" |
\ endif


set laststatus=2 " ���¹� ǥ�ø� �׻��Ѵ�
set statusline=\ %<%l:%v\ [%P]%=%a\ %h%m%r\ %F\


" ���� ���ڵ��� �ѱ����
if $LANG[0]=='k' && $LANG[1]=='o'
set fileencoding=korea
endif

colorscheme jellybeans
