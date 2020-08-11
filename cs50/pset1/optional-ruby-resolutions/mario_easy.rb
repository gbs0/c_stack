require 'pry'

class Mario
	def self.towerBuilder(n_floors)
		tower = []	 # Empty array for hold final result
		hashes = '#'	 # Set inital hashes number

		n_floors.times do 	 # First loop for iterate over the number of floors 
			tower = tower.map do |space|		# Second loop for add the spaces
				" #{space}"
			end
			tower.push(hashes) # Add current star count in tower array
	    hashes += '#' # Add two hashes in the counter for even star count
		end	
		tower.each_with_index {|floor, index| print "#{floor} \n " }
	end
end

Mario.towerBuilder(4)