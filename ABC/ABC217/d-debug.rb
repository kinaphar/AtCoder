x = 2

minx = x
p "minx default is #{minx}"

x-1.downto(0){|j|
  p "now j is #{j}"
  if wood[j] == 1 then
    minx = j
    puts "j is #{j}"
    break
  end
}

# for i in 10..1 do
#   puts i
# end
