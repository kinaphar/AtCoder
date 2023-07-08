st_n = gets.chomp.to_i

memo = Array.new()
memo1 = ["0", "0"].map(&:to_i)
memo.push(memo1)

# puts "--------"
# p memo

for i in 1..st_n do
  tmp = gets.chomp.split(" ").map(&:to_i)
  st = memo[i-1].dup  #dupを忘れずに
  # p "st is #{st}"
  if tmp[0] == 1 then
    st[0] += tmp[1]
  else
    st[1] += tmp[1]
  end
  # p "st is #{st}"
  memo.push(st)
  # p "memo is #{memo}"
end

# p memo
# puts "st is #{st}"

q_n = gets.chomp.to_i

# puts "q_n is #{q_n}"
# q = Array.new(1){|index| "hoge#{index}"}

for i in 1..q_n do
  q = gets.chomp.split(" ").map(&:to_i)
  ans1 = memo[q[1]][0] - memo[q[0]-1][0]
  ans2 = memo[q[1]][1] - memo[q[0]-1][1]
  puts "#{ans1} #{ans2}"
end
