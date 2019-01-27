# eval "$(rbenv init -)"

# PATH variables
set -U fish_user_paths /usr/local/bin /usr/bin /bin /usr/sbin /sbin

# pyenv, anaconda
set -gx PYENV_ROOT "$HOME/.pyenv"
set -x PATH $PATH "$PYENV_ROOT/bin"

status --is-interactive; and . (pyenv init - | psub)
alias python='python3'

# rbenv
status --is-interactive; and source (rbenv init -|psub)

# Emacs GUI
alias emacs='/Applications/Emacs.app/Contents/MacOS/Emacs'

# ls
set -x LSCOLORS 'gxfxcxdxhxegedabagacad'
alias la='ls -a'

source (conda info --root)/etc/fish/conf.d/conda.fish

# nodebrew
set -U fish_user_paths $fish_user_paths $HOME/.nodebrew/current/bin

# syntax hightlight
set fish_color_normal 'd6d6d6'
set fish_color_command '2efef7'
set fish_color_param '2efef7'
set fish_color_redirection '00ff00'
set fish_color_error 'fa58f4'
set fish_color_quote 'd6d6d6'

# mac tex
set -U fish_user_paths $fish_user_paths /usr/local/texlive/2018/bin/x86_64-darwin
