// MESSAGE PRESSUREWING_DIGITAL PACKING

#define MAVLINK_MSG_ID_PRESSUREWING_DIGITAL 221

typedef struct __mavlink_pressurewing_digital_t
{
 uint16_t digital_pressure_left[20]; /*< Left wing digital pressure*/
 uint16_t digital_pressure_right[20]; /*< Right wing digital pressure*/
} mavlink_pressurewing_digital_t;

#define MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN 80
#define MAVLINK_MSG_ID_221_LEN 80

#define MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_CRC 115
#define MAVLINK_MSG_ID_221_CRC 115

#define MAVLINK_MSG_PRESSUREWING_DIGITAL_FIELD_DIGITAL_PRESSURE_LEFT_LEN 20
#define MAVLINK_MSG_PRESSUREWING_DIGITAL_FIELD_DIGITAL_PRESSURE_RIGHT_LEN 20

#define MAVLINK_MESSAGE_INFO_PRESSUREWING_DIGITAL { \
	"PRESSUREWING_DIGITAL", \
	2, \
	{  { "digital_pressure_left", NULL, MAVLINK_TYPE_UINT16_T, 20, 0, offsetof(mavlink_pressurewing_digital_t, digital_pressure_left) }, \
         { "digital_pressure_right", NULL, MAVLINK_TYPE_UINT16_T, 20, 40, offsetof(mavlink_pressurewing_digital_t, digital_pressure_right) }, \
         } \
}


/**
 * @brief Pack a pressurewing_digital message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param digital_pressure_left Left wing digital pressure
 * @param digital_pressure_right Right wing digital pressure
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_digital_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const uint16_t *digital_pressure_left, const uint16_t *digital_pressure_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN];

	_mav_put_uint16_t_array(buf, 0, digital_pressure_left, 20);
	_mav_put_uint16_t_array(buf, 40, digital_pressure_right, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#else
	mavlink_pressurewing_digital_t packet;

	mav_array_memcpy(packet.digital_pressure_left, digital_pressure_left, sizeof(uint16_t)*20);
	mav_array_memcpy(packet.digital_pressure_right, digital_pressure_right, sizeof(uint16_t)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_DIGITAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif
}

/**
 * @brief Pack a pressurewing_digital message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param digital_pressure_left Left wing digital pressure
 * @param digital_pressure_right Right wing digital pressure
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_digital_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const uint16_t *digital_pressure_left,const uint16_t *digital_pressure_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN];

	_mav_put_uint16_t_array(buf, 0, digital_pressure_left, 20);
	_mav_put_uint16_t_array(buf, 40, digital_pressure_right, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#else
	mavlink_pressurewing_digital_t packet;

	mav_array_memcpy(packet.digital_pressure_left, digital_pressure_left, sizeof(uint16_t)*20);
	mav_array_memcpy(packet.digital_pressure_right, digital_pressure_right, sizeof(uint16_t)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_DIGITAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif
}

/**
 * @brief Encode a pressurewing_digital struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_digital C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_digital_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pressurewing_digital_t* pressurewing_digital)
{
	return mavlink_msg_pressurewing_digital_pack(system_id, component_id, msg, pressurewing_digital->digital_pressure_left, pressurewing_digital->digital_pressure_right);
}

/**
 * @brief Encode a pressurewing_digital struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_digital C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_digital_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pressurewing_digital_t* pressurewing_digital)
{
	return mavlink_msg_pressurewing_digital_pack_chan(system_id, component_id, chan, msg, pressurewing_digital->digital_pressure_left, pressurewing_digital->digital_pressure_right);
}

/**
 * @brief Send a pressurewing_digital message
 * @param chan MAVLink channel to send the message
 *
 * @param digital_pressure_left Left wing digital pressure
 * @param digital_pressure_right Right wing digital pressure
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pressurewing_digital_send(mavlink_channel_t chan, const uint16_t *digital_pressure_left, const uint16_t *digital_pressure_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN];

	_mav_put_uint16_t_array(buf, 0, digital_pressure_left, 20);
	_mav_put_uint16_t_array(buf, 40, digital_pressure_right, 20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL, buf, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL, buf, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif
#else
	mavlink_pressurewing_digital_t packet;

	mav_array_memcpy(packet.digital_pressure_left, digital_pressure_left, sizeof(uint16_t)*20);
	mav_array_memcpy(packet.digital_pressure_right, digital_pressure_right, sizeof(uint16_t)*20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pressurewing_digital_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint16_t *digital_pressure_left, const uint16_t *digital_pressure_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_uint16_t_array(buf, 0, digital_pressure_left, 20);
	_mav_put_uint16_t_array(buf, 40, digital_pressure_right, 20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL, buf, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL, buf, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif
#else
	mavlink_pressurewing_digital_t *packet = (mavlink_pressurewing_digital_t *)msgbuf;

	mav_array_memcpy(packet->digital_pressure_left, digital_pressure_left, sizeof(uint16_t)*20);
	mav_array_memcpy(packet->digital_pressure_right, digital_pressure_right, sizeof(uint16_t)*20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PRESSUREWING_DIGITAL UNPACKING


/**
 * @brief Get field digital_pressure_left from pressurewing_digital message
 *
 * @return Left wing digital pressure
 */
static inline uint16_t mavlink_msg_pressurewing_digital_get_digital_pressure_left(const mavlink_message_t* msg, uint16_t *digital_pressure_left)
{
	return _MAV_RETURN_uint16_t_array(msg, digital_pressure_left, 20,  0);
}

/**
 * @brief Get field digital_pressure_right from pressurewing_digital message
 *
 * @return Right wing digital pressure
 */
static inline uint16_t mavlink_msg_pressurewing_digital_get_digital_pressure_right(const mavlink_message_t* msg, uint16_t *digital_pressure_right)
{
	return _MAV_RETURN_uint16_t_array(msg, digital_pressure_right, 20,  40);
}

/**
 * @brief Decode a pressurewing_digital message into a struct
 *
 * @param msg The message to decode
 * @param pressurewing_digital C-struct to decode the message contents into
 */
static inline void mavlink_msg_pressurewing_digital_decode(const mavlink_message_t* msg, mavlink_pressurewing_digital_t* pressurewing_digital)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_pressurewing_digital_get_digital_pressure_left(msg, pressurewing_digital->digital_pressure_left);
	mavlink_msg_pressurewing_digital_get_digital_pressure_right(msg, pressurewing_digital->digital_pressure_right);
#else
	memcpy(pressurewing_digital, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PRESSUREWING_DIGITAL_LEN);
#endif
}
