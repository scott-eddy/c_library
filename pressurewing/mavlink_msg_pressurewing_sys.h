// MESSAGE PRESSUREWING_SYS PACKING

#define MAVLINK_MSG_ID_PRESSUREWING_SYS 220

typedef struct __mavlink_pressurewing_sys_t
{
 uint8_t address_left[20]; /*< I2C sensor addresses*/
 uint8_t address_right[20]; /*< I2C sensor addresses*/
} mavlink_pressurewing_sys_t;

#define MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN 40
#define MAVLINK_MSG_ID_220_LEN 40

#define MAVLINK_MSG_ID_PRESSUREWING_SYS_CRC 31
#define MAVLINK_MSG_ID_220_CRC 31

#define MAVLINK_MSG_PRESSUREWING_SYS_FIELD_ADDRESS_LEFT_LEN 20
#define MAVLINK_MSG_PRESSUREWING_SYS_FIELD_ADDRESS_RIGHT_LEN 20

#define MAVLINK_MESSAGE_INFO_PRESSUREWING_SYS { \
	"PRESSUREWING_SYS", \
	2, \
	{  { "address_left", NULL, MAVLINK_TYPE_UINT8_T, 20, 0, offsetof(mavlink_pressurewing_sys_t, address_left) }, \
         { "address_right", NULL, MAVLINK_TYPE_UINT8_T, 20, 20, offsetof(mavlink_pressurewing_sys_t, address_right) }, \
         } \
}


/**
 * @brief Pack a pressurewing_sys message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param address_left I2C sensor addresses
 * @param address_right I2C sensor addresses
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_sys_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const uint8_t *address_left, const uint8_t *address_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN];

	_mav_put_uint8_t_array(buf, 0, address_left, 20);
	_mav_put_uint8_t_array(buf, 20, address_right, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#else
	mavlink_pressurewing_sys_t packet;

	mav_array_memcpy(packet.address_left, address_left, sizeof(uint8_t)*20);
	mav_array_memcpy(packet.address_right, address_right, sizeof(uint8_t)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_SYS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN, MAVLINK_MSG_ID_PRESSUREWING_SYS_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif
}

/**
 * @brief Pack a pressurewing_sys message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param address_left I2C sensor addresses
 * @param address_right I2C sensor addresses
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_pressurewing_sys_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const uint8_t *address_left,const uint8_t *address_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN];

	_mav_put_uint8_t_array(buf, 0, address_left, 20);
	_mav_put_uint8_t_array(buf, 20, address_right, 20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#else
	mavlink_pressurewing_sys_t packet;

	mav_array_memcpy(packet.address_left, address_left, sizeof(uint8_t)*20);
	mav_array_memcpy(packet.address_right, address_right, sizeof(uint8_t)*20);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_PRESSUREWING_SYS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN, MAVLINK_MSG_ID_PRESSUREWING_SYS_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif
}

/**
 * @brief Encode a pressurewing_sys struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_sys C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_sys_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_pressurewing_sys_t* pressurewing_sys)
{
	return mavlink_msg_pressurewing_sys_pack(system_id, component_id, msg, pressurewing_sys->address_left, pressurewing_sys->address_right);
}

/**
 * @brief Encode a pressurewing_sys struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pressurewing_sys C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_pressurewing_sys_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_pressurewing_sys_t* pressurewing_sys)
{
	return mavlink_msg_pressurewing_sys_pack_chan(system_id, component_id, chan, msg, pressurewing_sys->address_left, pressurewing_sys->address_right);
}

/**
 * @brief Send a pressurewing_sys message
 * @param chan MAVLink channel to send the message
 *
 * @param address_left I2C sensor addresses
 * @param address_right I2C sensor addresses
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_pressurewing_sys_send(mavlink_channel_t chan, const uint8_t *address_left, const uint8_t *address_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN];

	_mav_put_uint8_t_array(buf, 0, address_left, 20);
	_mav_put_uint8_t_array(buf, 20, address_right, 20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_SYS, buf, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN, MAVLINK_MSG_ID_PRESSUREWING_SYS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_SYS, buf, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif
#else
	mavlink_pressurewing_sys_t packet;

	mav_array_memcpy(packet.address_left, address_left, sizeof(uint8_t)*20);
	mav_array_memcpy(packet.address_right, address_right, sizeof(uint8_t)*20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_SYS, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN, MAVLINK_MSG_ID_PRESSUREWING_SYS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_SYS, (const char *)&packet, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_pressurewing_sys_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *address_left, const uint8_t *address_right)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_uint8_t_array(buf, 0, address_left, 20);
	_mav_put_uint8_t_array(buf, 20, address_right, 20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_SYS, buf, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN, MAVLINK_MSG_ID_PRESSUREWING_SYS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_SYS, buf, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif
#else
	mavlink_pressurewing_sys_t *packet = (mavlink_pressurewing_sys_t *)msgbuf;

	mav_array_memcpy(packet->address_left, address_left, sizeof(uint8_t)*20);
	mav_array_memcpy(packet->address_right, address_right, sizeof(uint8_t)*20);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_SYS, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN, MAVLINK_MSG_ID_PRESSUREWING_SYS_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_PRESSUREWING_SYS, (const char *)packet, MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE PRESSUREWING_SYS UNPACKING


/**
 * @brief Get field address_left from pressurewing_sys message
 *
 * @return I2C sensor addresses
 */
static inline uint16_t mavlink_msg_pressurewing_sys_get_address_left(const mavlink_message_t* msg, uint8_t *address_left)
{
	return _MAV_RETURN_uint8_t_array(msg, address_left, 20,  0);
}

/**
 * @brief Get field address_right from pressurewing_sys message
 *
 * @return I2C sensor addresses
 */
static inline uint16_t mavlink_msg_pressurewing_sys_get_address_right(const mavlink_message_t* msg, uint8_t *address_right)
{
	return _MAV_RETURN_uint8_t_array(msg, address_right, 20,  20);
}

/**
 * @brief Decode a pressurewing_sys message into a struct
 *
 * @param msg The message to decode
 * @param pressurewing_sys C-struct to decode the message contents into
 */
static inline void mavlink_msg_pressurewing_sys_decode(const mavlink_message_t* msg, mavlink_pressurewing_sys_t* pressurewing_sys)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_pressurewing_sys_get_address_left(msg, pressurewing_sys->address_left);
	mavlink_msg_pressurewing_sys_get_address_right(msg, pressurewing_sys->address_right);
#else
	memcpy(pressurewing_sys, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_PRESSUREWING_SYS_LEN);
#endif
}
