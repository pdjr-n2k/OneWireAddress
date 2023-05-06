## class tOneWireAddress

ADT representing a OneWire device address.  

---

```c++
tOneWireAddress (unsigned char * address = 0)
```
Construct a new tOneWireAddress object. If address is not supplied, then the newly instantiated address is set to [ 0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff ].

**Parameters**
- `address` - byte array used to specify an initial address. 

---

```c++
int compare (tOneWireAddress * address)
```
Compare two OneWire address objects. 

**Parameters**
- `address` - the address to be compared. 

**Returns:**
- int - 0 if the addresses are equal. 

---

```c++
unsigned char* getAddress ()
```
Get the address object value. 

**Returns:**
- unsigned char* - pointer to the address value as an eight byte array. 

---

```c++
unsigned char getByte (int index)
```
Get a specified byte from the address. 

**Parameters**
- `index` - index of the byte to be retrieved. 

**Returns:**
- unsigned char - the value the specified byte. 

---

```c++
void setAddress (unsigned char * address)
```
Set the address object to a specified value. 

**Parameters**
- `address` - byte array used to specify an initial address. 

---

```c++
void setByte (int index, unsigned char value)
```
Set a specified byte of the address to a specified value. 

**Parameters**
- `index` - index of the byte to be written. 
- `value` - the value to be assigned. 

---

###### API documentation generated using [Doxygenmd](https://github.com/d99kris/doxygenmd)

