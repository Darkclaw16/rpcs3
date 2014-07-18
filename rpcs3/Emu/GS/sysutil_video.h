#pragma once

enum VideoErrorCode
{
	CELL_VIDEO_OUT_SUCCEEDED                      = 0,
	CELL_VIDEO_OUT_ERROR_NOT_IMPLEMENTED          = 0x8002b220,
	CELL_VIDEO_OUT_ERROR_ILLEGAL_CONFIGURATION    = 0x8002b221,
	CELL_VIDEO_OUT_ERROR_ILLEGAL_PARAMETER        = 0x8002b222,
	CELL_VIDEO_OUT_ERROR_PARAMETER_OUT_OF_RANGE   = 0x8002b223,
	CELL_VIDEO_OUT_ERROR_DEVICE_NOT_FOUND         = 0x8002b224,
	CELL_VIDEO_OUT_ERROR_UNSUPPORTED_VIDEO_OUT    = 0x8002b225,
	CELL_VIDEO_OUT_ERROR_UNSUPPORTED_DISPLAY_MODE = 0x8002b226,
	CELL_VIDEO_OUT_ERROR_CONDITION_BUSY           = 0x8002b227,
	CELL_VIDEO_OUT_ERROR_VALUE_IS_NOT_SET         = 0x8002b228,
};

enum CellVideoOut
{
	CELL_VIDEO_OUT_PRIMARY,
	CELL_VIDEO_OUT_SECONDARY,
};

enum CellVideoOutResolutionId
{
	CELL_VIDEO_OUT_RESOLUTION_UNDEFINED = 0,
	CELL_VIDEO_OUT_RESOLUTION_1080      = 1,
	CELL_VIDEO_OUT_RESOLUTION_720       = 2,
	CELL_VIDEO_OUT_RESOLUTION_480       = 4,
	CELL_VIDEO_OUT_RESOLUTION_576       = 5,
	CELL_VIDEO_OUT_RESOLUTION_1600x1080 = 10,
	CELL_VIDEO_OUT_RESOLUTION_1440x1080 = 11,
	CELL_VIDEO_OUT_RESOLUTION_1280x1080 = 12,
	CELL_VIDEO_OUT_RESOLUTION_960x1080  = 13,
	CELL_VIDEO_OUT_RESOLUTION_720_3D_FRAME_PACKING      = 0x81,
	CELL_VIDEO_OUT_RESOLUTION_1024x720_3D_FRAME_PACKING	= 0x88,
	CELL_VIDEO_OUT_RESOLUTION_960x720_3D_FRAME_PACKING  = 0x89,
	CELL_VIDEO_OUT_RESOLUTION_800x720_3D_FRAME_PACKING  = 0x8a,
	CELL_VIDEO_OUT_RESOLUTION_640x720_3D_FRAME_PACKING  = 0x8b,
};

enum CellVideoOutScanMode
{
	CELL_VIDEO_OUT_SCAN_MODE_INTERLACE,
	CELL_VIDEO_OUT_SCAN_MODE_PROGRESSIVE,
};

enum CellVideoOutScanMode2
{
	CELL_VIDEO_OUT_SCAN_MODE2_AUTO,
	CELL_VIDEO_OUT_SCAN_MODE2_INTERLACE,
	CELL_VIDEO_OUT_SCAN_MODE2_PROGRESSIVE,
};

enum CellVideoOutRefreshRate
{
	CELL_VIDEO_OUT_REFRESH_RATE_AUTO    = 0x0000,
	CELL_VIDEO_OUT_REFRESH_RATE_59_94HZ = 0x0001,
	CELL_VIDEO_OUT_REFRESH_RATE_50HZ    = 0x0002,
	CELL_VIDEO_OUT_REFRESH_RATE_60HZ    = 0x0004,
	CELL_VIDEO_OUT_REFRESH_RATE_30HZ    = 0x0008
};

enum CellVideoOutPortType
{
	CELL_VIDEO_OUT_PORT_NONE            = 0x00,
	CELL_VIDEO_OUT_PORT_HDMI            = 0x01,
	CELL_VIDEO_OUT_PORT_NETWORK         = 0x41,
	CELL_VIDEO_OUT_PORT_COMPOSITE_S     = 0x81,
	CELL_VIDEO_OUT_PORT_D               = 0x82,
	CELL_VIDEO_OUT_PORT_COMPONENT       = 0x83,
	CELL_VIDEO_OUT_PORT_RGB             = 0x84,
	CELL_VIDEO_OUT_PORT_AVMULTI_SCART   = 0x85,
	CELL_VIDEO_OUT_PORT_DSUB            = 0x86
};

enum CellVideoOutDisplayAspect
{
	CELL_VIDEO_OUT_ASPECT_AUTO,
	CELL_VIDEO_OUT_ASPECT_4_3,
	CELL_VIDEO_OUT_ASPECT_16_9,
};

enum CellVideoOutBufferColorFormat
{
	CELL_VIDEO_OUT_BUFFER_COLOR_FORMAT_X8R8G8B8,
	CELL_VIDEO_OUT_BUFFER_COLOR_FORMAT_X8B8G8R8,
	CELL_VIDEO_OUT_BUFFER_COLOR_FORMAT_R16G16B16X16_FLOAT,
};

enum CellVideoOutOutputState
{
	CELL_VIDEO_OUT_OUTPUT_STATE_ENABLED,
	CELL_VIDEO_OUT_OUTPUT_STATE_DISABLED,
	CELL_VIDEO_OUT_OUTPUT_STATE_PREPARING,
};

enum CellVideoOutDeviceState
{
	CELL_VIDEO_OUT_DEVICE_STATE_UNAVAILABLE,
	CELL_VIDEO_OUT_DEVICE_STATE_AVAILABLE,
};

enum CellVideoOutColorSpace
{
	CELL_VIDEO_OUT_COLOR_SPACE_RGB   = 0x01,
	CELL_VIDEO_OUT_COLOR_SPACE_YUV   = 0x02,
	CELL_VIDEO_OUT_COLOR_SPACE_XVYCC = 0x04,
};

enum CellVideoOutDebugMonitorType
{
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_UNDEFINED     = 0,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_480I_59_94HZ  = 1,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_576I_50HZ     = 2,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_480P_59_94HZ  = 3,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_576P_50HZ     = 4,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_1080I_59_94HZ = 5,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_720P_59_94HZ  = 7,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_1080P_59_94HZ = 9,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_WXGA_60HZ     = 11,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_SXGA_60HZ     = 12,
	CELL_VIDEO_OUT_DEBUG_MONITOR_TYPE_WUXGA_60HZ    = 13
};

struct CellVideoOutColorInfo
{
	u16 redX;
	u16 redY;
	u16 greenX;
	u16 greenY;
	u16 blueX;
	u16 blueY;
	u16 whiteX;
	u16 whiteY;
	u32 gamma;
};

struct CellVideoOutKSVList
{
	u8 ksv[32*5];
	u8 reserved[4];
	u32 count;
};

enum CellVideoOutDisplayConversion
{
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_NONE          = 0x00,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_WXGA       = 0x01,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_SXGA       = 0x02,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_WUXGA      = 0x03,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_1080       = 0x05,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_REMOTEPLAY = 0x10,
	CELL_VIDEO_OUT_DISPLAY_CONVERSION_TO_720_3D_FRAME_PACKING = 0x80,
};

struct CellVideoOutDisplayMode
{
	u8 resolutionId;
	u8 scanMode;
	u8 conversion;
	u8 aspect;
	u8 reserved[2];
	u16 refreshRates;
};

struct CellVideoOutResolution
{
	be_t<u16> width;
	be_t<u16> height;
};

struct CellVideoOutDeviceInfo
{
	u8 portType;
	u8 colorSpace;
	u16 latency;
	u8 availableModeCount;
	u8 state;
	u8 rgbOutputRange;
	u8 reserved[5];
	CellVideoOutColorInfo colorInfo;
	CellVideoOutDisplayMode availableModes[32];
	CellVideoOutKSVList ksvList;
};

struct CellVideoOutState
{
	u8 state;
	u8 colorSpace;
	u8 reserved[6];
	CellVideoOutDisplayMode displayMode;
};

struct CellVideoOutConfiguration
{
	u8 resolutionId;
	u8 format;
	u8 aspect;
	u8 reserved[9];
	u32 pitch;
};

enum CellVideoOutEvent
{
	CELL_VIDEO_OUT_EVENT_DEVICE_CHANGED,
	CELL_VIDEO_OUT_EVENT_OUTPUT_DISABLED,
	CELL_VIDEO_OUT_EVENT_DEVICE_AUTHENTICATED,
	CELL_VIDEO_OUT_EVENT_OUTPUT_ENABLED,
};

enum CellVideoOutCopyControl
{
	CELL_VIDEO_OUT_COPY_CONTROL_COPY_FREE,
	CELL_VIDEO_OUT_COPY_CONTROL_COPY_ONCE,
	CELL_VIDEO_OUT_COPY_CONTROL_COPY_NEVER,
};

enum CellVideoOutRGBOutputRange
{
	CELL_VIDEO_OUT_RGB_OUTPUT_RANGE_LIMITED,
	CELL_VIDEO_OUT_RGB_OUTPUT_RANGE_FULL,
};

static const CellVideoOutResolution ResolutionTable[] =
{
	{ be_t<u16>::MakeFromBE(se16(0xffff)), be_t<u16>::MakeFromBE(se16(0xffff)) }, //0 - 0
	{ be_t<u16>::MakeFromBE(se16(1920)), be_t<u16>::MakeFromBE(se16(1080)) },     //1 - 1
	{ be_t<u16>::MakeFromBE(se16(1280)), be_t<u16>::MakeFromBE(se16(720)) },      //2 - 2
	{ be_t<u16>::MakeFromBE(se16(720)), be_t<u16>::MakeFromBE(se16(480)) },       //4 - 3
	{ be_t<u16>::MakeFromBE(se16(720)), be_t<u16>::MakeFromBE(se16(576)) },       //5 - 4
	{ be_t<u16>::MakeFromBE(se16(1600)), be_t<u16>::MakeFromBE(se16(1080)) },     //10 - 5
	{ be_t<u16>::MakeFromBE(se16(1440)), be_t<u16>::MakeFromBE(se16(1080)) },     //11 - 6
	{ be_t<u16>::MakeFromBE(se16(1280)), be_t<u16>::MakeFromBE(se16(1080)) },     //12 - 7
	{ be_t<u16>::MakeFromBE(se16(960)), be_t<u16>::MakeFromBE(se16(1080)) },      //13 - 8
};

inline static u32 ResolutionIdToNum(u32 id)
{
	static const u32 res[] = 
	{
		0, //0
		1, //1
		2, //2
		0, //3
		3, //4
		4, //5
		0, //6
		0, //7
		0, //8
		0, //9
		5, //10
		6, //11
		7, //12
		8, //13
	};

	return id <= 13 ? res[id] : 0;
}

inline static u32 ResolutionNumToId(u32 num)
{
	static const u32 res[] = 
	{
		0,  //0
		1,  //1
		2,  //2
		4,  //3
		5,  //4
		10, //5
		11, //6
		12, //7
		13, //8
	};

	return num <= 8 ? res[num] : 0;
}
