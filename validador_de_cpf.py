#Validador de CPF
cpf = input("Digite o CPF no formato xxx.xxx.xxx-xx: ")

#Função que calcula os dígitos verificadores válidos
def verificador(item,rng):    
  verificador = 0    
  for i in rng:
      verificador = verificador + (int(i)*item)
      item += 1
  resto = verificador % 11
    
  #Se o resto da divisão for 10, o dígito deve ser zero.
  if (resto != 10):
      verif = resto
  else:
      verif = 0

  return verif

verif1 = verificador(1,cpf[:3]+cpf[4:7]+cpf[8:11])
verif2 = verificador(0,cpf[:3]+cpf[4:7]+cpf[8:11]+str(verif1))

#Comparando os dígitos verificadores digitados com os calculados
if (verif1 == int(cpf[-2]) and verif2 == int(cpf[-1])):
  print("\nO CPF digitado é válido.")
else:
  print("\nO CPF digitado é inválido.")