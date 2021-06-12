#### **Decimal** number to **Binary**/**Octal**/**Hexa Decimal** number. 
* Convert **Decimal** number to **Binary** number.
* Convert **Decimal** number to **Octal** number.
* Convert **Decimal** number to **Hexa Decimal** number.

```formula
Decimal number can be INTEGER or INTEGER.FRACTION

base | INTEGER                                                                  FRACTION
     |------------                                                            x base
base | quotient          - Remainder ===> LSB                                 ------------
     |------------                                            MSB <== Integer . fraction
base | quotient          - Remainder                                          x base
     |------------                                                            ------------
base | quotient          - Remainder                                  Integer . fraction
     |------------                                                            x base
base | quotient          - Remainder                                          ------------
     |------------                                                    Integer . fraction
     |------------                                                            x base
     |------------                                                            ------------
       quotient = 0      - Remainder ===> MSB                 LSB <== Integer . fraction

The result is MSB to LSB
```

#### **Binary**/**Octal**/**Hexa Decimal** number to **Decimal** number. 
* Convert **Binary** number to **Decimal** number.
* Convert **Octal** number to **Decimal** number.
* Convert **Hexa Decimal** number to **Decimal** number.

```formula
The base power scale is opposite of the numerical scale.
    5   4   3   2   1   0  -1  -2  -3  -4  -5
<---|---|---|---|---|---|---|---|---|---|---|--->

( Disit * base⁽ⁿ⁾ ) + ( Disit * base⁽ⁿ⁾ ) + ( Disit * base⁽ⁿ⁾ ) + ( Disit * base⁽ⁿ⁾ ) + ( Disit * base⁽ⁿ⁾ )

The power of the unit is 0
```

#### **Octal**/**Binary**/**Hexa Decimal** number inter change. 
* Convert **Octal** number to **Binary** number.
* Convert **Hexa Decimal** number to **Binary** number.
* Convert **Binary** number to **Octal** number.
* Convert **Binary** number to **Hexa Decimal** number.
* Convert **Octal** number to **Hexa Decimal** number.
* Convert **Hexa Decimal** number to **Octal** number.

```formula
Octal = binary 3 bit        Hexa Decimal = binary 4 bit

Octal   | Binary            Hexa decimal    | Binary
--------|-----------        ----------------|------------
    0   | 000                           0   | 0000
    1   | 001                           1   | 0001
    2   | 010                           2   | 0010
    3   | 011                           3   | 0011
    4   | 100                           4   | 010
    5   | 101                           5   | 0101
    6   | 110                           6   | 0110
    7   | 111                           7   | 0111
                                        8   | 1000
                                        9   | 1001
                                        A   | 1010
                                        B   | 1011
                                        C   | 1100
                                        D   | 1101
                                        E   | 1110
                                        F   | 1111

There is no way to convert Octal to Hexa decimal or Hexa decimal to Octal directly.

Octal ==> Binary ==> Hexa decimal
Hexa Decimal ==> Binary ==> Octal
```
