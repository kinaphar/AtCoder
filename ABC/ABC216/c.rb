# 11 = 1011 → ABBABA 

n = gets.chomp.to_i

puts n.to_s(2).gsub('1','AB').gsub('0','B').chop
