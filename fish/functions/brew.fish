# to avoid warning of brew doctor
function brew
    set -l index (contains -i $HOME/.pyenv/shims $PATH)
    set PATH[$index] /bin # /bin is dummy
    command brew $argv
    set PATH[$index] $HOME/.pyenv/shims
end
