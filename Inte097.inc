

.subckt Inte097 in Vout2 Vdd Vss
*WDA3
Rg10 n0	     0  6.955e3
Rg0  n0  Vout0  10e3
Rg20 in     n0  10e3
Rg11 p0  Vout2  6.955e3
Rg21 p0      0  10e3
Rg1	 p0      0  10e3
XOPAMPWDA3	p0	n0	Vdd	Vss	Vout0	TL081

*Integrador
Rx Vout0 n1 10e3
Cx Vout1 n1 10uF IC=10mV
XOPAMPInt 0 n1 Vdd Vss Vout1 TL081

*WAA1
Rh10    n2  0     10e3
Rh20    n2	0     6.955e3
Rg2     n2  Vout2 10e3
Rh11 Vout1	p2    10e3
Rh21    in	p2    6.955e3
Rg3     p2	0     10e3
XOPAMPWAA2 p2 n2 Vdd Vss Vout2 TL081
.ends