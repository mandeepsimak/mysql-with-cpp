/*
 * ===================================================================
 *
 *       Filename:  mysql-main.cpp
 *
 *    Description:  Main Method
 *
 *        Created:  Thursday 28 February 2013 10:53:59  IST
 *       Compiler:  gcc
 *
 *         Author:  Mandeep Kaur, meghasimak@gmail.com
 *        License:  GNU General Public License
 *      Copyright:  Copyright (c) 2013, Great Developers
 *
 * ===================================================================
 */

/**-------------------------------------------------------------------
 *  \mainpage MySQL Connectivity with C++
 *
 *  This is a working code example of using C++ to interface with MySQL.
 *  Steps:                                                                
 *                                                                         
 *  \li Change database details in database-detail.h file.                 
 *                                                                         
 *  \li Download this code \n
 *      $ git clone https://github.com/megha55/mysql-with-cpp.git         
 *                                                                         
 *  \li To run example \n                                              
 *      $ make 
 * 
 *  \li For installing MySQL Connector for C++ \n
 *  $ make install
 *------------------------------------------------------------------*/

/**-------------------------------------------------------------------
 *  Include required header files
 *------------------------------------------------------------------*/
 
#include "database.h"

int main(void)
{
    MySQL Mysql;
    Mysql.ShowTables();

    return 0;
}
