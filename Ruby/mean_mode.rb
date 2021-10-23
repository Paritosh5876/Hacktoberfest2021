#finds mean and mode of integers

#takes input
inputArr = gets.chomp

inputArr = inputArr_str.split(" ")

inputArr = inputArr.map(&:to_f)

sum_of_arr = inputArr.inject(0){|sum,x| sum + x }

mean = sum_of_arr/inputArr.length

print "#{mean.round(2)} "

mode = inputArr.max_by{|mod| inputArr.count(mod)}

print "#{mode.truncate(2)}"
