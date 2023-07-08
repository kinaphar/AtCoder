s = gets.chomp.to_s

smin = s
smax = s

temp = ""

lp = s.length

for i in 1..(lp) do

  print "----timpo START!----\n"

  temp = s.slice!(0)
  print temp + "\n"
  print s + "\n"

  s = s + temp

  print s + "\n"
  # s.slice!(0)
  # print s + "\n"

  # s+= temp
  # print s + "\n"

  print "----timpo END----#{i}\n"
end

