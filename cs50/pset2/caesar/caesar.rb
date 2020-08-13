require 'pry'
# Caesar script for encrypt some string
class Caesar
  ALPHA = [*"A".."Z"] # Range for alphabet

  def initialize
  	@args_key = ARGV[0];
	@plaintext = ARGV[1];
  end

  def calcCypher
  	# cypher_index = (plain_index + args_key) % 26 # Factor for get key cypher index
  	puts @plaintext
  	# puts ("cyphertext: #{cyphertext}")
  end

end

c = Caesar.new

c.calcCypher()

