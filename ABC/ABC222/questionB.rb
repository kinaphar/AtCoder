vn,vp = gets.chomp.split(" ")
vp = vp.to_i
vn = vn.to_i
a = gets.split(" ")

# 動作を確認
# puts vp
# puts vn
# p a[1]

count = 0

for i in 1..vn do
  if a[i-1].to_i < vp then
    count += 1
  end
end

puts count

