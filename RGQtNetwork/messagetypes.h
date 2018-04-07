#ifndef MESSAGETYPES_H
#define MESSAGETYPES_H

/*
 * RGQt MessageTypes definition
 *
 * Created: 2018-04-07
 * Last update: 2018-04-07 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-04-07   ashamsutdinov       Initial version
 * */


#include "rgqtnetwork_global.h"


/*
 * MessageType value depends of message category.
 * Threre are two groups of message types: session message types and application message types.
 * */

/*
 * Session messages.
 * */
enum RGQTNETWORK SessionMessageType :
        byte
{
    /*
     * Message types 1 to 100 reserved for core protocol use
     * */
    SESSION_MESSAGE_TYPE_PROTOCOL_BEGIN = 1,

    /*
     * 1 to 10  : connection messages
     * */

    /*
     * Application sends Handshake message when connection with correspondent is established.
     * */
    Handshake       = 1,

    /*
     * Application sends Heartbit messages periodically to mantain the connection.
     * */
    Heartbit        = 2,

    /*
     * Application sends Ping (sub-type Request) message to get correspondent latency.
     * Correspondent is expected to respond with Ping (sub-type Response) message.
     * */
    Ping            = 3,

    /*
     * Application sends Connect message when it attemps to connect to correspondent.
     * */
    Connect         = 4,

    /*
     * Application sends Disconnect message when it attempts to disconnect from correspondent.
     * */
    Disconnect      = 5,

    /*
     * Application sends Reconnect message when it attempts to reconnect with correspondent.
     * */
    Reconnect       = 6,

    /*
     * Application sends Terminate message when it asks correspondent to terminate the session.
     * Correspondent is expected to initiate disconnection by sending Disconnect message and closing the socket.
     * */
    Terminate       = 7,

    /*
     * 11 to 20 : authentication messages
     * */

    /*
     * Authenticaion (Login) message
     * */
    Authenticate    = 11,

    /*
     * Logout message
     * */
    Logout          = 12,

    /*
     * Session token message
     * */
    SessionToken    = 13,

    /*
     * Renew session token message
     * */
    RenewToken      = 14,

    /*
     * Session token expired message
     * */
    TokenExpired    = 15,


    SESSION_MESSAGE_TYPE_PROTOCOL_END   = 100,


    /*
     * Message types 101 to 255 can be used for extension-defined sesion message types
     * */
    SESSION_MESSAGE_TYPE_EXTENSION_BEGIN    = 101,
    SESSION_MESSAGE_TYPE_EXTENSION_END      = 255
};


enum RGQTNETWORK MessageType :
        byte
{
    /*
     * Message types 1 to 100 reserved for core protocol use
     * */
    MESSAGE_TYPE_PROTOCOL_BEGIN = 1,

    /*
     * 1 to 10: Test messages
     * */

    /*
     * Echo message, correspondent is expected to respond with Echo message (sub-type Response) and send back all of the payload.
     * */
    Echo            = 1,

    /*
     * Spam message, designed to test the performance
     * */
    Spam            = 2,

    /*
     * 11 to 100: Application messages
     * */

    Data        = 11,
    Instruction = 12,
    Script      = 13,
    Telemetry   = 14,
    Report      = 15,
    Result      = 16,


    MESSAGE_TYPE_PROTOCOL_END   = 100,


    /*
     * Message types 101 to 255 can be used for extension-defined sesion message types
     * */
    MESSAGE_TYPE_EXTENSION_BEGIN    = 101,
    MESSAGE_TYPE_EXTENSION_END      = 255
};


#endif // MESSAGETYPES_H
