s = gets.chomp.to_s

smin = s.dup
smax = s.dup

head = ""

lp = s.length

for i in 1..(lp) do
  head = s.slice!(0)
  s = s + head
  # print "#{s}\n"

  if smin > s then
    smin = s.dup
  end
  # print "#{smin}\n"

  if smax < s then
    smax = s.dup
  end
  # print "#{smax}\n"
  # print "---\n"

end

# print "-------\n"

print "#{smin}\n"
print "#{smax}\n"
