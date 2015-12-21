// MESSAGE PRESSUREWING_PASCAL PACKING

#define MAVLINK_MSG_ID_PRESSUREWING_PASCAL 222

typedef struct __mavlink_pressurewing_pascal_t
{
 float pascal_pressure_left[20]; /*< Left wing pressure converted to Pa*/
 float pascal_pressure_right[20]; /*< Right wing pressure converted to Pa*/
} mavlink_pressurewing_pascal_t;

#define MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN 160
#define MAVLINK_MSG_ID_222_LEN 160

#define MAVLINK_MSG_ID_PRESSUREWING_PASCAL_CRC 217
#define MAVLINK_MSG_ID_222_CRC 217

#define MAVLINK_MSG_PRESSUREWING_PASCAL_FIELD_PASCAL_PRESSURE_LEFT_LEN 20
#define MAVLINK_MSG_PRESSUREWING_PASCAL_FIELD_PASCAL_PRESSURE_RIGHT_LEN 20

#define MAVLINK_MESSAGE_INFO_PRESSUREWING_PASCAL { \
	"PRESSUREWING_PASCAL", \
	2, \
	{  { "pascal_pressure_left", NULL, MAVLINK_TYPE_FLOAT, 20, 0, offsetof(mavlink_pressurewing_pascal_t, pascal_pressure_left) }, \
         { "pascal_pressure_right", NULL, MAVLINK_TYPE_FLOAT, 20, 80, offsetof(mavlink_pressurewing_pascal_t, pascal_pressure_right) }, \
         } \
}


/**
 * @brief Pack a pressurewing_pascal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pascal_pressure_left Left wing pressure converted to Pa
 * @param pascal_pressure_right Right wing pressure converted to Pa
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_pascal_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const float *pascal_pressure_left, const float *pascal_pressure_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN];

	_mav_put_float_array(buf, 0, pascal_pressure_left, 20);
	_mav_put_float_array(buf, 80, pascal_pressure_right, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#else
	mavlink_pressurewing_pascal_t packet;

	mav_array_memcpy(packet.pascal_pressure_left, pascal_pressure_left, sizeof(float)*20);
	mav_array_memcpy(packet.pascal_pressure_right, pascal_pressure_right, sizeof(float)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_PASCAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif
}

/**
 * @brief Pack a pressurewing_pascal message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pascal_pressure_left Left wing pressure converted to Pa
 * @param pascal_pressure_right Right wing pressure converted to Pa
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_pascal_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const float *pascal_pressure_left,const float *pascal_pressure_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN];

	_mav_put_float_array(buf, 0, pascal_pressure_left, 20);
	_mav_put_float_array(buf, 80, pascal_pressure_right, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#else
	mavlink_pressurewing_pascal_t packet;

	mav_array_memcpy(packet.pascal_pressure_left, pascal_pressure_left, sizeof(float)*20);
	mav_array_memcpy(packet.pascal_pressure_right, pascal_pressure_right, sizeof(float)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_PASCAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif
}

/**
 * @brief Encode a pressurewing_pascal struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_pascal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_pascal_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pressurewing_pascal_t* pressurewing_pascal)
{
	return mavlink_msg_pressurewing_pascal_pack(system_id, component_id, msg, pressurewing_pascal->pascal_pressure_left, pressurewing_pascal->pascal_pressure_right);
}

/**
 * @brief Encode a pressurewing_pascal struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_pascal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_pascal_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pressurewing_pascal_t* pressurewing_pascal)
{
	return mavlink_msg_pressurewing_pascal_pack_chan(system_id, component_id, chan, msg, pressurewing_pascal->pascal_pressure_left, pressurewing_pascal->pascal_pressure_right);
}

/**
 * @brief Send a pressurewing_pascal message
 * @param chan MAVLink channel to send the message
 *
 * @param pascal_pressure_left Left wing pressure converted to Pa
 * @param pascal_pressure_right Right wing pressure converted to Pa
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pressurewing_pascal_send(mavlink_channel_t chan, const float *pascal_pressure_left, const float *pascal_pressure_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN];

	_mav_put_float_array(buf, 0, pascal_pressure_left, 20);
	_mav_put_float_array(buf, 80, pascal_pressure_right, 20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL, buf, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL, buf, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif
#else
	mavlink_pressurewing_pascal_t packet;

	mav_array_memcpy(packet.pascal_pressure_left, pascal_pressure_left, sizeof(float)*20);
	mav_array_memcpy(packet.pascal_pressure_right, pascal_pressure_right, sizeof(float)*20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pressurewing_pascal_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const float *pascal_pressure_left, const float *pascal_pressure_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_float_array(buf, 0, pascal_pressure_left, 20);
	_mav_put_float_array(buf, 80, pascal_pressure_right, 20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL, buf, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL, buf, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif
#else
	mavlink_pressurewing_pascal_t *packet = (mavlink_pressurewing_pascal_t *)msgbuf;

	mav_array_memcpy(packet->pascal_pressure_left, pascal_pressure_left, sizeof(float)*20);
	mav_array_memcpy(packet->pascal_pressure_right, pascal_pressure_right, sizeof(float)*20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_PASCAL, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PRESSUREWING_PASCAL UNPACKING


/**
 * @brief Get field pascal_pressure_left from pressurewing_pascal message
 *
 * @return Left wing pressure converted to Pa
 */
static inline uint16_t mavlink_msg_pressurewing_pascal_get_pascal_pressure_left(const mavlink_message_t* msg, float *pascal_pressure_left)
{
	return _MAV_RETURN_float_array(msg, pascal_pressure_left, 20,  0);
}

/**
 * @brief Get field pascal_pressure_right from pressurewing_pascal message
 *
 * @return Right wing pressure converted to Pa
 */
static inline uint16_t mavlink_msg_pressurewing_pascal_get_pascal_pressure_right(const mavlink_message_t* msg, float *pascal_pressure_right)
{
	return _MAV_RETURN_float_array(msg, pascal_pressure_right, 20,  80);
}

/**
 * @brief Decode a pressurewing_pascal message into a struct
 *
 * @param msg The message to decode
 * @param pressurewing_pascal C-struct to decode the message contents into
 */
static inline void mavlink_msg_pressurewing_pascal_decode(const mavlink_message_t* msg, mavlink_pressurewing_pascal_t* pressurewing_pascal)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_pressurewing_pascal_get_pascal_pressure_left(msg, pressurewing_pascal->pascal_pressure_left);
	mavlink_msg_pressurewing_pascal_get_pascal_pressure_right(msg, pressurewing_pascal->pascal_pressure_right);
#else
	memcpy(pressurewing_pascal, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PRESSUREWING_PASCAL_LEN);
#endif
}
