# Configuração da Protoboard

## Materiais Necessários

- Arduino Uno
- Protoboard
- 3 LEDs (Vermelho, Amarelo e Verde)
- 3 Resistor de 220 ohms (ou resistores apropriados para os LEDs)
- Jumpers

## Instruções

1. Conecte o Arduino Uno à protoboard.

2. Conecte os LEDs e resistores:
   - Conecte o LED Vermelho ao pino 10 do Arduino com um resistor de 220 ohms.
   - Conecte o LED Amarelo ao pino 9 do Arduino com um resistor de 220 ohms.
   - Conecte o LED Verde ao pino 8 do Arduino com um resistor de 220 ohms.
   - Certifique-se de que o ânodo (perna mais longa) dos LEDs esteja conectado ao pino do Arduino e o cátodo (perna mais curta) esteja conectado ao resistor e, em seguida, ao terra (GND) do Arduino.

3. Conecte o fio de alimentação (+5V) do Arduino à linha de alimentação da protoboard (normalmente a linha vermelha) e o fio de terra (GND) do Arduino à linha de terra da protoboard (normalmente a linha azul).

4. Agora, o hardware está configurado corretamente. Você pode fazer o upload do código do semáforo para o Arduino.

# Explicação Física do Código

Este código Arduino simula o funcionamento de um semáforo de trânsito com três cores: vermelho, amarelo e verde. Aqui está como funciona fisicamente:

- O LED vermelho se acende, indicando que os veículos devem parar. Isso é alcançado ao definir o pino 10 como HIGH (ligado) e os pinos 9 (amarelo) e 8 (verde) como LOW (desligado).

- Após 2 segundos (2000 milissegundos), o LED amarelo se acende. Isso é alcançado ao definir o pino 9 como HIGH e o pino 10 (vermelho) como LOW.

- Depois de 5 segundos, o LED amarelo se apaga, e o LED vermelho volta a se acender, indicando que os veículos devem parar novamente.

- Mais 5 segundos depois, o LED vermelho se apaga, e o LED verde se acende, permitindo que os veículos sigam em frente. Isso é alcançado ao definir o pino 8 como HIGH e o pino 10 (vermelho) como LOW.

- Esse ciclo se repete indefinidamente, simulando o funcionamento de um semáforo de trânsito real.
