#ターミナル起動時に.bashrcを読み込む
if [ -f ~/.bashrc ] ; then
. ~/.bashrc
fi

#ls -G
export LSCOLORS='gxfxcxdxhxegedabagacad'

#pyenv & PATH
export PYENV_ROOT="$HOME/.pyenv"
export PATH="$PYENV_ROOT/bin:/usr/local/bin:$PATH"
eval "$(pyenv init -)"
eval "$(rbenv init -)"
