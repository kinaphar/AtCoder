# n = 導火線の本数
n = gets.chomp.to_i

# a = 導火線の情報
a = Array.new

# s = 導火線全体の燃えるまでの時間
s = 0

for i in 1..n do
  temp = gets.chomp.split(" ")
  a.push(temp)
  s += temp[0].to_f / temp[1].to_f
  # print "#{s}\n"
end

s_half = s/2
puts "s_half is #{s_half}"

tmp = 0
ans = 0

for i in 0..n-1 do

  # この導火線が燃える総時間
  this = a[i][0].to_f / a[i][1].to_f
  puts "this is #{this}"

  tmp += this
  puts "tmp is #{tmp}"

  if tmp >= s_half then
    # this の長さ * (this突入から何秒? / thisの総時間)
    puts a[i][0].to_f * (1 - (tmp - s_half) / this)
    ans += a[i][0].to_f * (1 - (tmp - s_half) / this)
    puts "final ans is #{ans}"
  end

  ans += a[i][0].to_f
  puts "ans is #{ans}"
  puts "--------"

end

# print a
# print a[2][1]


# 2
# 4 2 (2秒)
# 8 2 (4秒)
# -> 6cm
