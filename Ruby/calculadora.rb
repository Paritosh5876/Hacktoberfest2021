require 'colorize'

print "----------------------------------\n"
print "--------- Calculadora :) ---------\n"
print "----------------------------------\n\n"

sleep 1
system 'clear'
	msg_resultado = Proc.new do |param| 
		system 'clear'
		printf "O resultado da operação é #{param}\n\n" 
	end

continuar = 1

while continuar == 1

	printf "Escolha dois números para fazer uma operação\n\n"

	printf "Digite o primeiro numero: "
	num1 = gets.chomp.to_i


	printf "Digite o segundo numero: "
	num2 = gets.chomp.to_i
	system 'clear'
		
	puts 'Escolha a operação'
	puts '1- Multiplicar'
	puts '2- Dividir'
	puts '3- Somar'
	printf "4- Subtrair\n"
	printf "Opção: \n"
	operacao = gets.chomp.to_i


	system 'clear'
	case operacao
		when 1
			resultado = num1 * num2 

			msg_resultado.call(resultado)
		when 2
			resultado = num1 / num2 

			msg_resultado.call(resultado)
		when 3
			resultado = num1 + num2 

			msg_resultado.call(resultado)
		when 4	
			resultado = num1 - num2 

			msg_resultado.call(resultado)
		else 
			if operacao >= 5
				puts "opção invalida".red
				break
			end			
	end

	puts 'Deseja continuar '
	puts '1- Sim'
	puts '2- Não'
	printf "Opção: "
	continuar = gets.chomp.to_i

	if continuar == 2
		puts 'Até mais ;)'
		break
	elsif continuar > 2
		puts "Digite um número válido".red
		break
	end	
end
