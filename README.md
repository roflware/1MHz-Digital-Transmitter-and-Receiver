# 1MHz Digital ASK/OOK Transmitter and Receiver
A custom 1MHz digital ASK/OOK transmitter and receiver, including the schematics and wiring diagrams.

Some key points: This needs to be at a baudrate of 100bps due to it being 1MHz and ASK/OOK for transmitting/receiving the data, and a loop antenna is required. I used an Arduino to facilitate the ASK/OOK encoding of the data portion, and the devices I designed are used to handle the modulation and demodulation of the signals. The signal looks relatively clean as square waves on the receiving end with the oscilloscope, as shown toward the end of this page. I put these together as both PCBs based off of the wiring diagrams (probably not ideal for transmission, so can definitely be tweaked to not have traces so closely together) and on a perma-board as well which should have less interference issues.

## Transmitter Details
Schematic and wiring diagram for the transmitter: https://easyeda.com/testuser123456/1MHz-ASK-OOK-Transmitter

### Build of Materials
- Ceramic Capacitors
  - 1nf, C2
  - 220pf, C3
  - 47nf, C4
  - 100nf, C5
- Electrolytic Capacitor
  - 1uf, C1
- Header, H1
- Antenna, J1
  - Loop Antenna: https://www.amazon.com/gp/product/B0987HGYMM/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
- Inductor
- 200uh, L1
- Transistor
  - 2N3904, Q1
- Resistors
  - 15kΩ, R1
  - 5.6kΩ, R2
  - 68Ω, R3

### Pictures of Diagrams and Final Product

**Transmitter Schematic:**

<img src="images/1MHz_ASK_OOK_Transmitter_Schematic.PNG" />


**Transmitter Wiring Diagram:**

![](images/1MHz_ASK_OOK_Transmitter_Wiring_Diagram.PNG)


**Transmitter LTSpice Simulation:**

![](images/ltspice_1_10mhz_simulation_colpitts_oscillator.PNG)


**Transmitter Perma-board:**

<img src="images/1MHz_ASK_OOK_Transmitter_Perma_Board.jpg" width="50%" />


**Transmitter PCB:**

<img src="images/1MHz_ASK_OOK_Transmitter_PCB.jpg" width="50%" />


## Receiver Details
Schematic and wiring diagram for the receiver: https://easyeda.com/testuser123456/1mhz-ask-ook-receiver

### Build of Materials
- Ceramic Capacitors
  - 1nf, C1, C2
  - 220pf, C3
  - 100nf, C4, C5, C6, C7
  - 2.2nf, C8
- Diode
  - 1N5819, D1
- Header, H1
- Antenna, J1
  - Loop Antenna: https://www.amazon.com/gp/product/B0987HGYMM/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
- Inductor
  - 200uh, L1
- Transistors
  - BC549C, Q1, Q2, Q3
- Resistors
  - 10kΩ, R1, R2, R3
  - 1kΩ, R4, R5
  - 220kΩ, R6
  - 560kΩ, R7
  - 2.2kΩ, R8
  - 120Ω, R9
- Amplifier Circuit
  - LM258P, U1

### Pictures of Diagrams and Final Product

**Receiver Schematic:**

![](images/1MHz_ASK_OOK_Receiver_Schematic.PNG)


**Receiver Wiring Diagram:**

![](images/1MHz_ASK_OOK_Receiver_Wiring_Diagram.PNG)


**Received Signal Over Oscilloscope:**

<img src="images/final%20success%20received%20and%20demodulated.jpg" width="50%" />


**Receiver Perma-board:**

<img src="images/1MHz_ASK_OOK_Receiver_Perma_Board.jpg" width="50%" />


**Receiver PCB:**

<img src="images/1MHz_ASK_OOK_Receiver_PCB.jpg" width="50%" />
