st_n = gets.chomp.to_i

st = Array.new(1){|index| "hoge#{index}"}

for i in 1..st_n do
  tmp = gets.chomp.split(" ").map(&:to_i)
  st.push(tmp)
end

# puts "st is #{st}"

q_n = gets.chomp.to_i

# puts "q_n is #{q_n}"

# q = Array.new(1){|index| "hoge#{index}"}

for i in 1..q_n do
  tmp = gets.chomp.split(" ").map(&:to_i)

  # puts "tmp is #{tmp}"

  p1 = 0
  p2 = 0

  for j in tmp[0]..tmp[1] do
    if st[j][0] == 1 then
      p1 += st[j][1]
      # puts st[j][1]
    else
      p2 += st[j][1]
      # puts st[j][1]
    end
  end
  # puts "---------"
  puts "#{p1} #{p2}"

end
