require 'pry'

class Mario
	def self.towerBuilder(n_floors)
		n = n_floors # Put integer into a variable
		tower = []	 # Empty array for hold final result
		tower2 = []
		hashes = '#'	 # Set inital hashes number

		n.times do 	 # First loop for iterate over the number of floors 
			tower = tower.map do |space|		# Second loop for add the spaces
				" #{space}"
			end
			tower.push(hashes) # Add current star count in tower array
			tower2.push(hashes)
	    hashes += '#' # Add two hashes in the counter for even star count
		end	
		tower.each_with_index {|floor, index| print "#{floor}" + "  " + "#{tower2[index]} \n" }
	end
end

Mario.towerBuilder(4)