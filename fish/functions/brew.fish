function brew --description avoid warining of brew doctor
  set tmp_PATH $PATH
  set -l i (contains -i $HOME/.pyenv/shims $PATH)
  set PATH[$i] /bin  # bin is dummy
  
  command brew $argv
  set PATH $tmp_PATH
end
