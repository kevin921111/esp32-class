/*------- --------- --------- --------- --------- --------- --------- --------- 
    Filename   : AT_BC26.h
    Author     : Samui Young
    Date       : 2019/09/16
    Disclaimer : This code is presented "as is" without any guarantees.
    Details    : comunicate with BC26 by AT command
--------- --------- --------- --------- --------- --------- --------- ---------
    2019/09/17 :
        -  001 : v0.0.1
    2019/09/16 :
        -  000 : new
--------- --------- --------- --------- --------- --------- --------- --------*/

#ifndef AT_BC26_h
#define AT_BC26_h

/*------- --------- --------- --------- --------- --------- --------- --------- 
    header files
--------- --------- --------- --------- --------- --------- --------- --------*/
#include <Arduino.h>



/*------- --------- --------- --------- --------- --------- --------- --------- 
    macros
--------- --------- --------- --------- --------- --------- --------- --------*/



/*------- --------- --------- --------- --------- --------- --------- --------- 
    variables
--------- --------- --------- --------- --------- --------- --------- --------*/



/*------- --------- --------- --------- --------- --------- --------- --------- 
    class
--------- --------- --------- --------- --------- --------- --------- --------*/

class AT_BC26
{
  public:
    AT_BC26();
    ~AT_BC26();

    bool historyMode;
    bool debugMode;

    void setSpeed(int32_t serialSpeed);

    String send(String ATcommand, uint32_t timeLimit);
    String send(String ATcommand);
    String send(String ATcommand, String answer, uint32_t timeout);
    String send(String ATcommand, String answer);
    String receive(uint32_t timeLimit);
    String receive();
    String receive(String answer, uint32_t timeout);
    String receive(String answer);
    String getError();
    String history();
    //void historyClear();
    String debugMsg();
    String milliSecond(uint32_t mS);
    String microSecond(uint32_t uS);
};


#endif // AT_BC26_h