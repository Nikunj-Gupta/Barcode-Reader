# Introduction

A barcode is an OMR representation of data relating to the object to which it is attached to. Data obtained through barcodes is available rapidly. They are extremely versatile. They avoid possibility of human error.  They also provide better decision making.

A barcode scanner is used to read these barcodes. Most barcode scanners consist of three parts- a illumination system, a sensor and the decoder. In general, a barcode scanner “scans” the black and white elements, of the barcode by illuminating the code with a red light, which is then converted into matching text. More specifically, the sensor in the barcode scanner detects the reflected light from the illumination system (the red light) and generates an analog signal that is sent to the decoder. The decoder interprets that signal, validates the barcode using the check digit, and coverts it into text. There are different types of barcode scanners. Some of them are- pen-type reader, camera-based reader, CCD reader, Laser scanner, etc.

We have made a prototype of a Pen-type Barcode reader. 

### Tech

* [Arduino][arduinohome] - Open-source electronic prototyping platform enabling users to create interactive electronic objects.

### Project

* [Video][video]
* [Poster][poster]

### Materials and Methods	

Materials used are:
* A photodiode
* A red LED
* Resistors
* LCD screen
* Arduino board
* Connecting wires
* 4 barcodes

A pen-type reader has a light source (red LED) and a photodiode at the tip of the pen. The tip of the pen is moved over the barcode to scan it. After scanning the code, an analog signal is sent through the  arduino board, which is interpreted and then the final output is displayed on the LCD screen. 

We designed four different barcodes of our own, each corresponding to  four of our teammates. These barcodes were scanned and the respective name of the member, associated with the barcode was displayed on the LCD screen.  

### Acknowledgements

* [Prof. Madhav Rao][profmr] for guiding us and giving us an opportunity to learn a lot from such a project.
* Our seniors and classmates for giving useful tips and ideas for successfully completing our project.



### Development

Want to contribute? Great!

# Conclusions and future work
We learnt how design the internal circuit of a pen-type barcode reader. We learnt the working of a photodiode. We learnt the working of a LCD screen through  an arduino  code and also learnt how an analog signal is read from the scanner, through an arduino code.

Given an opportunity, we would like to design and work out with other type of barcode scanners too. We would also like to learn and scan original barcodes using our barcode scanner. We would also like to make much efficient scanner to scan barcodes.

   [arduinohome]: <https://www.arduino.cc/>
   [video]: <https://www.dropbox.com/s/94tqnb6q5rkg8dd/Pen-Type%20Barcode%20Reader%20Prototype.avi?dl=0>
   [poster]: <https://www.dropbox.com/s/1iul44nl4no9l4s/elab%20poster.pptx?dl=0>
   [profmr]: <http://www.iiitb.ac.in/faculty_page.php?name=MadhavRao>
