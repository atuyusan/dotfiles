function fish_prompt  --description 'Write out the prompt'
  printf '[%s]%s $ ' (set_color '#dcdcdc')(whoami) (set_color '#00ff00')(prompt_pwd)
end
