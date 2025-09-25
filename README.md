# Trab1-Estruturas_de_Dados_Avan-adas
Coursework for this semester's class

Um hospital gerencia os atendimentos de pacientes da emergência utilizando uma única lista contendo
pulseiras indicativas de sua prioridade no atendimento. A prioridade é dada por cores (estado do
paciente) e números (ordem de chegada na emergência). As cores de prioridade são:
• Vermelha – pacientes em estado crítico, que requerem atendimento imediato.
• Amarela – pacientes que requerem atenção. São atendidos quando não há mais pacientes
em estado crítico.
• Verde – pacientes que requerem menos atenção. São atendidos quando não há mais
paciente em estado crítico e também não há pacientes que requerem atenção.
Portanto, a prioridade deve obedecer primeiramente ao estado do paciente, seguido pela ordem de
sua chegada na emergência. Assim, em um dado momento, a ordem de chegada poderia ser:
1 - Verde, 2 - Vermelha, 3 - Verde, 4 - Amarela, 5 - Vermelha.
E a lista gerada computacionalmente de acordo com a prioridade seria:
2 - Vermelha, 5 - Vermelha, 4 - Amarela, 1 - Verde, 3 - Verde.
Se chegar um novo paciente com prioridade Amarela, a lista ficará:
2 - Vermelha, 5 - Vermelha, 4 - Amarela, 6 – Amarela, 1 - Verde, 3 - Verde.
À medida em que os pacientes são atendidos, a prioridade do paciente é retirada da lista. Para cada
paciente atendido, a lista deve ser exibida, mostrando a quantidade de pacientes atuais por cada tipo
de prioridade.

Defina um TAD para a lista e elabore um programa que gerencie a prioridade dos atendimentos da
emergência do hospital, utilizando o TAD definido anteriormente.

Entradas e saídas do programa para entrega (arquivo de entrada: “entrada.txt” e para cada saída
indicar também a quantidade de pacientes por cada cor de prioridade, em uma nova linha, no seguinte
formato):
vermelha-4, amarela-1, verde-3

