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

# cd > ls
function cd
  builtin cd $argv
  ls -a
end

source (conda info --root)/etc/fish/conf.d/conda.fish

# avoid warning of brew doctor
function brew
  set tmp_PATH $PATH
  set -l i (contains -i $HOME/.pyenv/shims $PATH)
  set PATH[$i] /bin  # bin is dummy
  
  command brew $argv
  set PATH $tmp_PATH
end

# nodebrew
set -U fish_user_paths $fish_user_paths $HOME/.nodebrew/current/bin
