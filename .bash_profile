#ターミナル起動時に.bashrcを読み込む
if [ -f ~/.bashrc ] ; then
. ~/.bashrc
fi

#ls -G
export LSCOLORS='gxfxcxdxhxegedabagacad'

eval "$(rbenv init -)"

#alias brew="PATH=/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin brew"
# added by Anaconda3 2018.12 installer
# >>> conda init >>>
# !! Contents within this block are managed by 'conda init' !!
__conda_setup="$(CONDA_REPORT_ERRORS=false '/anaconda3/bin/conda' shell.bash hook 2> /dev/null)"
if [ $? -eq 0 ]; then
    \eval "$__conda_setup"
else
    if [ -f "/anaconda3/etc/profile.d/conda.sh" ]; then
        . "/anaconda3/etc/profile.d/conda.sh"
        CONDA_CHANGEPS1=false conda activate base
    else
        \export PATH="/anaconda3/bin:$PATH"
    fi
fi
unset __conda_setup
# <<< conda init <<<

export PATH="/usr/local/sbin:$PATH"
export PATH=$HOME/.nodebrew/current/bin:$PATH
