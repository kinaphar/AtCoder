n = gets.chomp.to_i
names = Array.new
for i in 1..n
  names.push(gets.chomp)
end

if (names.count - names.uniq.count != 0) then
  puts "Yes"
else
  puts "No"
end
