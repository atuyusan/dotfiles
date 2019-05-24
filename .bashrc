# promptの設定
PS1='[\u] \w \$ '

# aliasの設定
alias ls='ls -FG'
alias ll='ls -lFG'
alias la='ls -aFG'
alias rm='rm -i'
alias emacs='/Applications/Emacs.app/Contents/MacOS/Emacs'  #EmacsをGUIで起動
alias speedtest='/usr/local/bin/speedtest'
alias python="python3"

function cdls() {
    # cdが成功したらls
    \cd "$@" && ls
}
alias cd=cdls

alias ..='cd ..'
alias ..2='cd ../..'
alias ..3='cd ../../..'

# 環境変数
export dl="$HOME/Downloads/"
export tech="$HOME/study/tech/"
