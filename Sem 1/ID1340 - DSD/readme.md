Program 1 :
Connect a-g pins of the display to D2-D8 pins of Arduino and display 1 on sevenseg display

Program 2 :
Connect A-D pins of the 7447 IC to the pins D2-D5 of the Arduino, 
Connect the 7447 IC decoder a- - g- pins to the a-g pins of the display respectively and display 0 on sevenseg display

Program 3 :
Display ABCD(0101=5) on display by connecting arduino to sevenseg without 7447 IC decoder

Program 4 :(Counting Decoder)
Display the counter of wxyz(0101=5)(i.e., display 5+1=6) on sevenseg without using 7447 IC decoder

Program 5 :(Decade counter)
Implement the decade counter using two 7474 IC's, one 7447 IC and sevenseg display with a delay of 500ms
For more details refer : https://github.com/gadepall/EE1110/blob/master/adld/gvv_afe.pdf

Source : http://tlc.iith.ac.in/Electrical.html

References : 
https://github.com/PrasannaIITH/Digital-System-Design-using-Arduino/blob/master/Digital%20System%20Design%20through%20Arduino.pdf
