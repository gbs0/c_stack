require 'pry'

loop do
  amount_left = nil
  coins = [ 25, 10, 5 , 1 ]
  draw = []

  print("Insert Money\n")
  print("$")
  
  input = gets.chomp.to_f
  cents = input * 100.round(2)
  
  n = coins.length

  i = n - 1
  while(i >= 0)
    
    while(cents >= coins[0])
    	cents -= coins[0]
    	draw.push(coins[0]) 
    end

    i -= 1
    # while(amount_left >= coins[1] )
    # 	amount_left -= coins[1]
    # 	draw += 1
    # end
  end

  p draw
end