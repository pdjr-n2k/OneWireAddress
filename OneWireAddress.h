/**********************************************************************
 * OneWireAddress.h
 * Paul Reeve <preeve@pdjr.eu>
 */ 
 
#ifndef ONE_WIRE_ADDRESS
#define ONE_WIRE_ADDRESS

/**
 * @brief ADT representing a OneWire device address.
 * 
 * Device addresses on a OneWire bus are 64-bit binary values.
 */
class tOneWireAddress {

  public:

    /**
     * @brief Construct a new tOneWireAddress object.
     * 
     * If address is not supplied, then the newly instantiated
     * address is set to 0xffffffffffffffff.
     * 
     * @param address - byte array used to specify an initial address.
     */
    tOneWireAddress(unsigned char *address = 0);
    
    /**
     * @brief Set this address object to a specified value.
     * 
     * @param address  - 8-byte array used to specify the new address.
     */
    void setAddress(unsigned char *address);

    /**
     * @brief Get this address object as a character array.
     * 
     * @return unsigned char*  - pointer to the address value as an
     * eight byte array.
     */
    unsigned char *getAddress();
    
    /**
     * @brief Set this  address object to 0xffffffffffffffff.
     */
    void clearAddress();

    /**
     * @brief Set a byte in this address to a specified value.
     * 
     * @param index - index of the byte to be written.
     * @param value - the value to be assigned.
     */
    void setByte(int index, unsigned char value);

    /**
     * @brief Get a specified byte from this address.
     * 
     * @param index - index of the byte to be retrieved.
     * @return unsigned char - the value the specified byte.
     */
    unsigned char getByte(int index);

    /**
     * @brief Compare two OneWire address objects using ```memcmp```.
     * 
     * @param address - the address to be compared.
     * @return int - the result returned by ```memcmp``` (0 if the addresses are equal).
     */
    int compare(tOneWireAddress *address);

  private:
    unsigned char address[8];

};

#endif
