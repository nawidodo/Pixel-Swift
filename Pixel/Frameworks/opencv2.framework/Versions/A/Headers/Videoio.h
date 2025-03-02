//
// This file is auto-generated. Please don't modify it!
//
#pragma once

#ifdef __cplusplus
//#import "opencv.hpp"
#import "opencv2/videoio.hpp"
#import "videoio/registry.hpp"
#else
#define CV_EXPORTS
#endif

#import <Foundation/Foundation.h>




// C++: enum VideoAccelerationType (cv.VideoAccelerationType)
typedef NS_ENUM(int, VideoAccelerationType) {
    VIDEO_ACCELERATION_NONE = 0,
    VIDEO_ACCELERATION_ANY = 1,
    VIDEO_ACCELERATION_D3D11 = 2,
    VIDEO_ACCELERATION_VAAPI = 3,
    VIDEO_ACCELERATION_MFX = 4
};


// C++: enum VideoCaptureAPIs (cv.VideoCaptureAPIs)
typedef NS_ENUM(int, VideoCaptureAPIs) {
    CAP_ANY = 0,
    CAP_VFW = 200,
    CAP_V4L = 200,
    CAP_V4L2 = CAP_V4L,
    CAP_FIREWIRE = 300,
    CAP_FIREWARE = CAP_FIREWIRE,
    CAP_IEEE1394 = CAP_FIREWIRE,
    CAP_DC1394 = CAP_FIREWIRE,
    CAP_CMU1394 = CAP_FIREWIRE,
    CAP_QT = 500,
    CAP_UNICAP = 600,
    CAP_DSHOW = 700,
    CAP_PVAPI = 800,
    CAP_OPENNI = 900,
    CAP_OPENNI_ASUS = 910,
    CAP_ANDROID = 1000,
    CAP_XIAPI = 1100,
    CAP_AVFOUNDATION = 1200,
    CAP_GIGANETIX = 1300,
    CAP_MSMF = 1400,
    CAP_WINRT = 1410,
    CAP_INTELPERC = 1500,
    CAP_REALSENSE = 1500,
    CAP_OPENNI2 = 1600,
    CAP_OPENNI2_ASUS = 1610,
    CAP_OPENNI2_ASTRA = 1620,
    CAP_GPHOTO2 = 1700,
    CAP_GSTREAMER = 1800,
    CAP_FFMPEG = 1900,
    CAP_IMAGES = 2000,
    CAP_ARAVIS = 2100,
    CAP_OPENCV_MJPEG = 2200,
    CAP_INTEL_MFX = 2300,
    CAP_XINE = 2400,
    CAP_UEYE = 2500,
    CAP_OBSENSOR = 2600
};


// C++: enum VideoCaptureOBSensorDataType (cv.VideoCaptureOBSensorDataType)
typedef NS_ENUM(int, VideoCaptureOBSensorDataType) {
    CAP_OBSENSOR_DEPTH_MAP = 0,
    CAP_OBSENSOR_BGR_IMAGE = 1,
    CAP_OBSENSOR_IR_IMAGE = 2
};


// C++: enum VideoCaptureOBSensorGenerators (cv.VideoCaptureOBSensorGenerators)
typedef NS_ENUM(int, VideoCaptureOBSensorGenerators) {
    CAP_OBSENSOR_DEPTH_GENERATOR = 1 << 29,
    CAP_OBSENSOR_IMAGE_GENERATOR = 1 << 28,
    CAP_OBSENSOR_IR_GENERATOR = 1 << 27,
    CAP_OBSENSOR_GENERATORS_MASK = CAP_OBSENSOR_DEPTH_GENERATOR + CAP_OBSENSOR_IMAGE_GENERATOR + CAP_OBSENSOR_IR_GENERATOR
};


// C++: enum VideoCaptureOBSensorProperties (cv.VideoCaptureOBSensorProperties)
typedef NS_ENUM(int, VideoCaptureOBSensorProperties) {
    CAP_PROP_OBSENSOR_INTRINSIC_FX = 26001,
    CAP_PROP_OBSENSOR_INTRINSIC_FY = 26002,
    CAP_PROP_OBSENSOR_INTRINSIC_CX = 26003,
    CAP_PROP_OBSENSOR_INTRINSIC_CY = 26004
};


// C++: enum VideoCaptureProperties (cv.VideoCaptureProperties)
typedef NS_ENUM(int, VideoCaptureProperties) {
    CAP_PROP_POS_MSEC = 0,
    CAP_PROP_POS_FRAMES = 1,
    CAP_PROP_POS_AVI_RATIO = 2,
    CAP_PROP_FRAME_WIDTH = 3,
    CAP_PROP_FRAME_HEIGHT = 4,
    CAP_PROP_FPS = 5,
    CAP_PROP_FOURCC = 6,
    CAP_PROP_FRAME_COUNT = 7,
    CAP_PROP_FORMAT = 8,
    CAP_PROP_MODE = 9,
    CAP_PROP_BRIGHTNESS = 10,
    CAP_PROP_CONTRAST = 11,
    CAP_PROP_SATURATION = 12,
    CAP_PROP_HUE = 13,
    CAP_PROP_GAIN = 14,
    CAP_PROP_EXPOSURE = 15,
    CAP_PROP_CONVERT_RGB = 16,
    CAP_PROP_WHITE_BALANCE_BLUE_U = 17,
    CAP_PROP_RECTIFICATION = 18,
    CAP_PROP_MONOCHROME = 19,
    CAP_PROP_SHARPNESS = 20,
    CAP_PROP_AUTO_EXPOSURE = 21,
    CAP_PROP_GAMMA = 22,
    CAP_PROP_TEMPERATURE = 23,
    CAP_PROP_TRIGGER = 24,
    CAP_PROP_TRIGGER_DELAY = 25,
    CAP_PROP_WHITE_BALANCE_RED_V = 26,
    CAP_PROP_ZOOM = 27,
    CAP_PROP_FOCUS = 28,
    CAP_PROP_GUID = 29,
    CAP_PROP_ISO_SPEED = 30,
    CAP_PROP_BACKLIGHT = 32,
    CAP_PROP_PAN = 33,
    CAP_PROP_TILT = 34,
    CAP_PROP_ROLL = 35,
    CAP_PROP_IRIS = 36,
    CAP_PROP_SETTINGS = 37,
    CAP_PROP_BUFFERSIZE = 38,
    CAP_PROP_AUTOFOCUS = 39,
    CAP_PROP_SAR_NUM = 40,
    CAP_PROP_SAR_DEN = 41,
    CAP_PROP_BACKEND = 42,
    CAP_PROP_CHANNEL = 43,
    CAP_PROP_AUTO_WB = 44,
    CAP_PROP_WB_TEMPERATURE = 45,
    CAP_PROP_CODEC_PIXEL_FORMAT = 46,
    CAP_PROP_BITRATE = 47,
    CAP_PROP_ORIENTATION_META = 48,
    CAP_PROP_ORIENTATION_AUTO = 49,
    CAP_PROP_HW_ACCELERATION = 50,
    CAP_PROP_HW_DEVICE = 51,
    CAP_PROP_HW_ACCELERATION_USE_OPENCL = 52,
    CAP_PROP_OPEN_TIMEOUT_MSEC = 53,
    CAP_PROP_READ_TIMEOUT_MSEC = 54,
    CAP_PROP_STREAM_OPEN_TIME_USEC = 55,
    CAP_PROP_VIDEO_TOTAL_CHANNELS = 56,
    CAP_PROP_VIDEO_STREAM = 57,
    CAP_PROP_AUDIO_STREAM = 58,
    CAP_PROP_AUDIO_POS = 59,
    CAP_PROP_AUDIO_SHIFT_NSEC = 60,
    CAP_PROP_AUDIO_DATA_DEPTH = 61,
    CAP_PROP_AUDIO_SAMPLES_PER_SECOND = 62,
    CAP_PROP_AUDIO_BASE_INDEX = 63,
    CAP_PROP_AUDIO_TOTAL_CHANNELS = 64,
    CAP_PROP_AUDIO_TOTAL_STREAMS = 65,
    CAP_PROP_AUDIO_SYNCHRONIZE = 66,
    CAP_PROP_LRF_HAS_KEY_FRAME = 67,
    CAP_PROP_CODEC_EXTRADATA_INDEX = 68,
    CAP_PROP_FRAME_TYPE = 69,
    CAP_PROP_N_THREADS = 70,
    CAP_PROP_PTS = 71,
    CAP_PROP_DTS_DELAY = 72
};


// C++: enum VideoWriterProperties (cv.VideoWriterProperties)
typedef NS_ENUM(int, VideoWriterProperties) {
    VIDEOWRITER_PROP_QUALITY = 1,
    VIDEOWRITER_PROP_FRAMEBYTES = 2,
    VIDEOWRITER_PROP_NSTRIPES = 3,
    VIDEOWRITER_PROP_IS_COLOR = 4,
    VIDEOWRITER_PROP_DEPTH = 5,
    VIDEOWRITER_PROP_HW_ACCELERATION = 6,
    VIDEOWRITER_PROP_HW_DEVICE = 7,
    VIDEOWRITER_PROP_HW_ACCELERATION_USE_OPENCL = 8,
    VIDEOWRITER_PROP_RAW_VIDEO = 9,
    VIDEOWRITER_PROP_KEY_INTERVAL = 10,
    VIDEOWRITER_PROP_KEY_FLAG = 11,
    VIDEOWRITER_PROP_PTS = 12,
    VIDEOWRITER_PROP_DTS_DELAY = 13
};



NS_ASSUME_NONNULL_BEGIN

// C++: class Videoio
/**
 * The Videoio module
 *
 * Member classes: `IStreamReader`, `VideoCapture`, `VideoWriter`
 *
 * Member enums: `VideoCaptureAPIs`, `VideoCaptureProperties`, `VideoWriterProperties`, `VideoAccelerationType`, `VideoCaptureOBSensorDataType`, `VideoCaptureOBSensorGenerators`, `VideoCaptureOBSensorProperties`
 */
CV_EXPORTS @interface Videoio : NSObject

#pragma mark - Class Constants


@property (class, readonly) int CAP_PROP_DC1394_OFF NS_SWIFT_NAME(CAP_PROP_DC1394_OFF);
@property (class, readonly) int CAP_PROP_DC1394_MODE_MANUAL NS_SWIFT_NAME(CAP_PROP_DC1394_MODE_MANUAL);
@property (class, readonly) int CAP_PROP_DC1394_MODE_AUTO NS_SWIFT_NAME(CAP_PROP_DC1394_MODE_AUTO);
@property (class, readonly) int CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO NS_SWIFT_NAME(CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO);
@property (class, readonly) int CAP_PROP_DC1394_MAX NS_SWIFT_NAME(CAP_PROP_DC1394_MAX);
@property (class, readonly) int CAP_OPENNI_DEPTH_GENERATOR NS_SWIFT_NAME(CAP_OPENNI_DEPTH_GENERATOR);
@property (class, readonly) int CAP_OPENNI_IMAGE_GENERATOR NS_SWIFT_NAME(CAP_OPENNI_IMAGE_GENERATOR);
@property (class, readonly) int CAP_OPENNI_IR_GENERATOR NS_SWIFT_NAME(CAP_OPENNI_IR_GENERATOR);
@property (class, readonly) int CAP_OPENNI_GENERATORS_MASK NS_SWIFT_NAME(CAP_OPENNI_GENERATORS_MASK);
@property (class, readonly) int CAP_PROP_OPENNI_OUTPUT_MODE NS_SWIFT_NAME(CAP_PROP_OPENNI_OUTPUT_MODE);
@property (class, readonly) int CAP_PROP_OPENNI_FRAME_MAX_DEPTH NS_SWIFT_NAME(CAP_PROP_OPENNI_FRAME_MAX_DEPTH);
@property (class, readonly) int CAP_PROP_OPENNI_BASELINE NS_SWIFT_NAME(CAP_PROP_OPENNI_BASELINE);
@property (class, readonly) int CAP_PROP_OPENNI_FOCAL_LENGTH NS_SWIFT_NAME(CAP_PROP_OPENNI_FOCAL_LENGTH);
@property (class, readonly) int CAP_PROP_OPENNI_REGISTRATION NS_SWIFT_NAME(CAP_PROP_OPENNI_REGISTRATION);
@property (class, readonly) int CAP_PROP_OPENNI_REGISTRATION_ON NS_SWIFT_NAME(CAP_PROP_OPENNI_REGISTRATION_ON);
@property (class, readonly) int CAP_PROP_OPENNI_APPROX_FRAME_SYNC NS_SWIFT_NAME(CAP_PROP_OPENNI_APPROX_FRAME_SYNC);
@property (class, readonly) int CAP_PROP_OPENNI_MAX_BUFFER_SIZE NS_SWIFT_NAME(CAP_PROP_OPENNI_MAX_BUFFER_SIZE);
@property (class, readonly) int CAP_PROP_OPENNI_CIRCLE_BUFFER NS_SWIFT_NAME(CAP_PROP_OPENNI_CIRCLE_BUFFER);
@property (class, readonly) int CAP_PROP_OPENNI_MAX_TIME_DURATION NS_SWIFT_NAME(CAP_PROP_OPENNI_MAX_TIME_DURATION);
@property (class, readonly) int CAP_PROP_OPENNI_GENERATOR_PRESENT NS_SWIFT_NAME(CAP_PROP_OPENNI_GENERATOR_PRESENT);
@property (class, readonly) int CAP_PROP_OPENNI2_SYNC NS_SWIFT_NAME(CAP_PROP_OPENNI2_SYNC);
@property (class, readonly) int CAP_PROP_OPENNI2_MIRROR NS_SWIFT_NAME(CAP_PROP_OPENNI2_MIRROR);
@property (class, readonly) int CAP_OPENNI_IMAGE_GENERATOR_PRESENT NS_SWIFT_NAME(CAP_OPENNI_IMAGE_GENERATOR_PRESENT);
@property (class, readonly) int CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE NS_SWIFT_NAME(CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE);
@property (class, readonly) int CAP_OPENNI_DEPTH_GENERATOR_PRESENT NS_SWIFT_NAME(CAP_OPENNI_DEPTH_GENERATOR_PRESENT);
@property (class, readonly) int CAP_OPENNI_DEPTH_GENERATOR_BASELINE NS_SWIFT_NAME(CAP_OPENNI_DEPTH_GENERATOR_BASELINE);
@property (class, readonly) int CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH NS_SWIFT_NAME(CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH);
@property (class, readonly) int CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION NS_SWIFT_NAME(CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION);
@property (class, readonly) int CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON NS_SWIFT_NAME(CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON);
@property (class, readonly) int CAP_OPENNI_IR_GENERATOR_PRESENT NS_SWIFT_NAME(CAP_OPENNI_IR_GENERATOR_PRESENT);
@property (class, readonly) int CAP_OPENNI_DEPTH_MAP NS_SWIFT_NAME(CAP_OPENNI_DEPTH_MAP);
@property (class, readonly) int CAP_OPENNI_POINT_CLOUD_MAP NS_SWIFT_NAME(CAP_OPENNI_POINT_CLOUD_MAP);
@property (class, readonly) int CAP_OPENNI_DISPARITY_MAP NS_SWIFT_NAME(CAP_OPENNI_DISPARITY_MAP);
@property (class, readonly) int CAP_OPENNI_DISPARITY_MAP_32F NS_SWIFT_NAME(CAP_OPENNI_DISPARITY_MAP_32F);
@property (class, readonly) int CAP_OPENNI_VALID_DEPTH_MASK NS_SWIFT_NAME(CAP_OPENNI_VALID_DEPTH_MASK);
@property (class, readonly) int CAP_OPENNI_BGR_IMAGE NS_SWIFT_NAME(CAP_OPENNI_BGR_IMAGE);
@property (class, readonly) int CAP_OPENNI_GRAY_IMAGE NS_SWIFT_NAME(CAP_OPENNI_GRAY_IMAGE);
@property (class, readonly) int CAP_OPENNI_IR_IMAGE NS_SWIFT_NAME(CAP_OPENNI_IR_IMAGE);
@property (class, readonly) int CAP_OPENNI_VGA_30HZ NS_SWIFT_NAME(CAP_OPENNI_VGA_30HZ);
@property (class, readonly) int CAP_OPENNI_SXGA_15HZ NS_SWIFT_NAME(CAP_OPENNI_SXGA_15HZ);
@property (class, readonly) int CAP_OPENNI_SXGA_30HZ NS_SWIFT_NAME(CAP_OPENNI_SXGA_30HZ);
@property (class, readonly) int CAP_OPENNI_QVGA_30HZ NS_SWIFT_NAME(CAP_OPENNI_QVGA_30HZ);
@property (class, readonly) int CAP_OPENNI_QVGA_60HZ NS_SWIFT_NAME(CAP_OPENNI_QVGA_60HZ);
@property (class, readonly) int CAP_PROP_GSTREAMER_QUEUE_LENGTH NS_SWIFT_NAME(CAP_PROP_GSTREAMER_QUEUE_LENGTH);
@property (class, readonly) int CAP_PROP_PVAPI_MULTICASTIP NS_SWIFT_NAME(CAP_PROP_PVAPI_MULTICASTIP);
@property (class, readonly) int CAP_PROP_PVAPI_FRAMESTARTTRIGGERMODE NS_SWIFT_NAME(CAP_PROP_PVAPI_FRAMESTARTTRIGGERMODE);
@property (class, readonly) int CAP_PROP_PVAPI_DECIMATIONHORIZONTAL NS_SWIFT_NAME(CAP_PROP_PVAPI_DECIMATIONHORIZONTAL);
@property (class, readonly) int CAP_PROP_PVAPI_DECIMATIONVERTICAL NS_SWIFT_NAME(CAP_PROP_PVAPI_DECIMATIONVERTICAL);
@property (class, readonly) int CAP_PROP_PVAPI_BINNINGX NS_SWIFT_NAME(CAP_PROP_PVAPI_BINNINGX);
@property (class, readonly) int CAP_PROP_PVAPI_BINNINGY NS_SWIFT_NAME(CAP_PROP_PVAPI_BINNINGY);
@property (class, readonly) int CAP_PROP_PVAPI_PIXELFORMAT NS_SWIFT_NAME(CAP_PROP_PVAPI_PIXELFORMAT);
@property (class, readonly) int CAP_PVAPI_FSTRIGMODE_FREERUN NS_SWIFT_NAME(CAP_PVAPI_FSTRIGMODE_FREERUN);
@property (class, readonly) int CAP_PVAPI_FSTRIGMODE_SYNCIN1 NS_SWIFT_NAME(CAP_PVAPI_FSTRIGMODE_SYNCIN1);
@property (class, readonly) int CAP_PVAPI_FSTRIGMODE_SYNCIN2 NS_SWIFT_NAME(CAP_PVAPI_FSTRIGMODE_SYNCIN2);
@property (class, readonly) int CAP_PVAPI_FSTRIGMODE_FIXEDRATE NS_SWIFT_NAME(CAP_PVAPI_FSTRIGMODE_FIXEDRATE);
@property (class, readonly) int CAP_PVAPI_FSTRIGMODE_SOFTWARE NS_SWIFT_NAME(CAP_PVAPI_FSTRIGMODE_SOFTWARE);
@property (class, readonly) int CAP_PVAPI_DECIMATION_OFF NS_SWIFT_NAME(CAP_PVAPI_DECIMATION_OFF);
@property (class, readonly) int CAP_PVAPI_DECIMATION_2OUTOF4 NS_SWIFT_NAME(CAP_PVAPI_DECIMATION_2OUTOF4);
@property (class, readonly) int CAP_PVAPI_DECIMATION_2OUTOF8 NS_SWIFT_NAME(CAP_PVAPI_DECIMATION_2OUTOF8);
@property (class, readonly) int CAP_PVAPI_DECIMATION_2OUTOF16 NS_SWIFT_NAME(CAP_PVAPI_DECIMATION_2OUTOF16);
@property (class, readonly) int CAP_PVAPI_PIXELFORMAT_MONO8 NS_SWIFT_NAME(CAP_PVAPI_PIXELFORMAT_MONO8);
@property (class, readonly) int CAP_PVAPI_PIXELFORMAT_MONO16 NS_SWIFT_NAME(CAP_PVAPI_PIXELFORMAT_MONO16);
@property (class, readonly) int CAP_PVAPI_PIXELFORMAT_BAYER8 NS_SWIFT_NAME(CAP_PVAPI_PIXELFORMAT_BAYER8);
@property (class, readonly) int CAP_PVAPI_PIXELFORMAT_BAYER16 NS_SWIFT_NAME(CAP_PVAPI_PIXELFORMAT_BAYER16);
@property (class, readonly) int CAP_PVAPI_PIXELFORMAT_RGB24 NS_SWIFT_NAME(CAP_PVAPI_PIXELFORMAT_RGB24);
@property (class, readonly) int CAP_PVAPI_PIXELFORMAT_BGR24 NS_SWIFT_NAME(CAP_PVAPI_PIXELFORMAT_BGR24);
@property (class, readonly) int CAP_PVAPI_PIXELFORMAT_RGBA32 NS_SWIFT_NAME(CAP_PVAPI_PIXELFORMAT_RGBA32);
@property (class, readonly) int CAP_PVAPI_PIXELFORMAT_BGRA32 NS_SWIFT_NAME(CAP_PVAPI_PIXELFORMAT_BGRA32);
@property (class, readonly) int CAP_PROP_XI_DOWNSAMPLING NS_SWIFT_NAME(CAP_PROP_XI_DOWNSAMPLING);
@property (class, readonly) int CAP_PROP_XI_DATA_FORMAT NS_SWIFT_NAME(CAP_PROP_XI_DATA_FORMAT);
@property (class, readonly) int CAP_PROP_XI_OFFSET_X NS_SWIFT_NAME(CAP_PROP_XI_OFFSET_X);
@property (class, readonly) int CAP_PROP_XI_OFFSET_Y NS_SWIFT_NAME(CAP_PROP_XI_OFFSET_Y);
@property (class, readonly) int CAP_PROP_XI_TRG_SOURCE NS_SWIFT_NAME(CAP_PROP_XI_TRG_SOURCE);
@property (class, readonly) int CAP_PROP_XI_TRG_SOFTWARE NS_SWIFT_NAME(CAP_PROP_XI_TRG_SOFTWARE);
@property (class, readonly) int CAP_PROP_XI_GPI_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_GPI_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_GPI_MODE NS_SWIFT_NAME(CAP_PROP_XI_GPI_MODE);
@property (class, readonly) int CAP_PROP_XI_GPI_LEVEL NS_SWIFT_NAME(CAP_PROP_XI_GPI_LEVEL);
@property (class, readonly) int CAP_PROP_XI_GPO_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_GPO_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_GPO_MODE NS_SWIFT_NAME(CAP_PROP_XI_GPO_MODE);
@property (class, readonly) int CAP_PROP_XI_LED_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_LED_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_LED_MODE NS_SWIFT_NAME(CAP_PROP_XI_LED_MODE);
@property (class, readonly) int CAP_PROP_XI_MANUAL_WB NS_SWIFT_NAME(CAP_PROP_XI_MANUAL_WB);
@property (class, readonly) int CAP_PROP_XI_AUTO_WB NS_SWIFT_NAME(CAP_PROP_XI_AUTO_WB);
@property (class, readonly) int CAP_PROP_XI_AEAG NS_SWIFT_NAME(CAP_PROP_XI_AEAG);
@property (class, readonly) int CAP_PROP_XI_EXP_PRIORITY NS_SWIFT_NAME(CAP_PROP_XI_EXP_PRIORITY);
@property (class, readonly) int CAP_PROP_XI_AE_MAX_LIMIT NS_SWIFT_NAME(CAP_PROP_XI_AE_MAX_LIMIT);
@property (class, readonly) int CAP_PROP_XI_AG_MAX_LIMIT NS_SWIFT_NAME(CAP_PROP_XI_AG_MAX_LIMIT);
@property (class, readonly) int CAP_PROP_XI_AEAG_LEVEL NS_SWIFT_NAME(CAP_PROP_XI_AEAG_LEVEL);
@property (class, readonly) int CAP_PROP_XI_TIMEOUT NS_SWIFT_NAME(CAP_PROP_XI_TIMEOUT);
@property (class, readonly) int CAP_PROP_XI_EXPOSURE NS_SWIFT_NAME(CAP_PROP_XI_EXPOSURE);
@property (class, readonly) int CAP_PROP_XI_EXPOSURE_BURST_COUNT NS_SWIFT_NAME(CAP_PROP_XI_EXPOSURE_BURST_COUNT);
@property (class, readonly) int CAP_PROP_XI_GAIN_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_GAIN_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_GAIN NS_SWIFT_NAME(CAP_PROP_XI_GAIN);
@property (class, readonly) int CAP_PROP_XI_DOWNSAMPLING_TYPE NS_SWIFT_NAME(CAP_PROP_XI_DOWNSAMPLING_TYPE);
@property (class, readonly) int CAP_PROP_XI_BINNING_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_BINNING_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_BINNING_VERTICAL NS_SWIFT_NAME(CAP_PROP_XI_BINNING_VERTICAL);
@property (class, readonly) int CAP_PROP_XI_BINNING_HORIZONTAL NS_SWIFT_NAME(CAP_PROP_XI_BINNING_HORIZONTAL);
@property (class, readonly) int CAP_PROP_XI_BINNING_PATTERN NS_SWIFT_NAME(CAP_PROP_XI_BINNING_PATTERN);
@property (class, readonly) int CAP_PROP_XI_DECIMATION_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_DECIMATION_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_DECIMATION_VERTICAL NS_SWIFT_NAME(CAP_PROP_XI_DECIMATION_VERTICAL);
@property (class, readonly) int CAP_PROP_XI_DECIMATION_HORIZONTAL NS_SWIFT_NAME(CAP_PROP_XI_DECIMATION_HORIZONTAL);
@property (class, readonly) int CAP_PROP_XI_DECIMATION_PATTERN NS_SWIFT_NAME(CAP_PROP_XI_DECIMATION_PATTERN);
@property (class, readonly) int CAP_PROP_XI_TEST_PATTERN_GENERATOR_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_TEST_PATTERN_GENERATOR_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_TEST_PATTERN NS_SWIFT_NAME(CAP_PROP_XI_TEST_PATTERN);
@property (class, readonly) int CAP_PROP_XI_IMAGE_DATA_FORMAT NS_SWIFT_NAME(CAP_PROP_XI_IMAGE_DATA_FORMAT);
@property (class, readonly) int CAP_PROP_XI_SHUTTER_TYPE NS_SWIFT_NAME(CAP_PROP_XI_SHUTTER_TYPE);
@property (class, readonly) int CAP_PROP_XI_SENSOR_TAPS NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_TAPS);
@property (class, readonly) int CAP_PROP_XI_AEAG_ROI_OFFSET_X NS_SWIFT_NAME(CAP_PROP_XI_AEAG_ROI_OFFSET_X);
@property (class, readonly) int CAP_PROP_XI_AEAG_ROI_OFFSET_Y NS_SWIFT_NAME(CAP_PROP_XI_AEAG_ROI_OFFSET_Y);
@property (class, readonly) int CAP_PROP_XI_AEAG_ROI_WIDTH NS_SWIFT_NAME(CAP_PROP_XI_AEAG_ROI_WIDTH);
@property (class, readonly) int CAP_PROP_XI_AEAG_ROI_HEIGHT NS_SWIFT_NAME(CAP_PROP_XI_AEAG_ROI_HEIGHT);
@property (class, readonly) int CAP_PROP_XI_BPC NS_SWIFT_NAME(CAP_PROP_XI_BPC);
@property (class, readonly) int CAP_PROP_XI_WB_KR NS_SWIFT_NAME(CAP_PROP_XI_WB_KR);
@property (class, readonly) int CAP_PROP_XI_WB_KG NS_SWIFT_NAME(CAP_PROP_XI_WB_KG);
@property (class, readonly) int CAP_PROP_XI_WB_KB NS_SWIFT_NAME(CAP_PROP_XI_WB_KB);
@property (class, readonly) int CAP_PROP_XI_WIDTH NS_SWIFT_NAME(CAP_PROP_XI_WIDTH);
@property (class, readonly) int CAP_PROP_XI_HEIGHT NS_SWIFT_NAME(CAP_PROP_XI_HEIGHT);
@property (class, readonly) int CAP_PROP_XI_REGION_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_REGION_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_REGION_MODE NS_SWIFT_NAME(CAP_PROP_XI_REGION_MODE);
@property (class, readonly) int CAP_PROP_XI_LIMIT_BANDWIDTH NS_SWIFT_NAME(CAP_PROP_XI_LIMIT_BANDWIDTH);
@property (class, readonly) int CAP_PROP_XI_SENSOR_DATA_BIT_DEPTH NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_DATA_BIT_DEPTH);
@property (class, readonly) int CAP_PROP_XI_OUTPUT_DATA_BIT_DEPTH NS_SWIFT_NAME(CAP_PROP_XI_OUTPUT_DATA_BIT_DEPTH);
@property (class, readonly) int CAP_PROP_XI_IMAGE_DATA_BIT_DEPTH NS_SWIFT_NAME(CAP_PROP_XI_IMAGE_DATA_BIT_DEPTH);
@property (class, readonly) int CAP_PROP_XI_OUTPUT_DATA_PACKING NS_SWIFT_NAME(CAP_PROP_XI_OUTPUT_DATA_PACKING);
@property (class, readonly) int CAP_PROP_XI_OUTPUT_DATA_PACKING_TYPE NS_SWIFT_NAME(CAP_PROP_XI_OUTPUT_DATA_PACKING_TYPE);
@property (class, readonly) int CAP_PROP_XI_IS_COOLED NS_SWIFT_NAME(CAP_PROP_XI_IS_COOLED);
@property (class, readonly) int CAP_PROP_XI_COOLING NS_SWIFT_NAME(CAP_PROP_XI_COOLING);
@property (class, readonly) int CAP_PROP_XI_TARGET_TEMP NS_SWIFT_NAME(CAP_PROP_XI_TARGET_TEMP);
@property (class, readonly) int CAP_PROP_XI_CHIP_TEMP NS_SWIFT_NAME(CAP_PROP_XI_CHIP_TEMP);
@property (class, readonly) int CAP_PROP_XI_HOUS_TEMP NS_SWIFT_NAME(CAP_PROP_XI_HOUS_TEMP);
@property (class, readonly) int CAP_PROP_XI_HOUS_BACK_SIDE_TEMP NS_SWIFT_NAME(CAP_PROP_XI_HOUS_BACK_SIDE_TEMP);
@property (class, readonly) int CAP_PROP_XI_SENSOR_BOARD_TEMP NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_BOARD_TEMP);
@property (class, readonly) int CAP_PROP_XI_CMS NS_SWIFT_NAME(CAP_PROP_XI_CMS);
@property (class, readonly) int CAP_PROP_XI_APPLY_CMS NS_SWIFT_NAME(CAP_PROP_XI_APPLY_CMS);
@property (class, readonly) int CAP_PROP_XI_IMAGE_IS_COLOR NS_SWIFT_NAME(CAP_PROP_XI_IMAGE_IS_COLOR);
@property (class, readonly) int CAP_PROP_XI_COLOR_FILTER_ARRAY NS_SWIFT_NAME(CAP_PROP_XI_COLOR_FILTER_ARRAY);
@property (class, readonly) int CAP_PROP_XI_GAMMAY NS_SWIFT_NAME(CAP_PROP_XI_GAMMAY);
@property (class, readonly) int CAP_PROP_XI_GAMMAC NS_SWIFT_NAME(CAP_PROP_XI_GAMMAC);
@property (class, readonly) int CAP_PROP_XI_SHARPNESS NS_SWIFT_NAME(CAP_PROP_XI_SHARPNESS);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_00 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_00);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_01 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_01);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_02 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_02);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_03 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_03);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_10 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_10);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_11 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_11);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_12 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_12);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_13 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_13);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_20 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_20);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_21 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_21);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_22 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_22);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_23 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_23);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_30 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_30);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_31 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_31);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_32 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_32);
@property (class, readonly) int CAP_PROP_XI_CC_MATRIX_33 NS_SWIFT_NAME(CAP_PROP_XI_CC_MATRIX_33);
@property (class, readonly) int CAP_PROP_XI_DEFAULT_CC_MATRIX NS_SWIFT_NAME(CAP_PROP_XI_DEFAULT_CC_MATRIX);
@property (class, readonly) int CAP_PROP_XI_TRG_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_TRG_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_ACQ_FRAME_BURST_COUNT NS_SWIFT_NAME(CAP_PROP_XI_ACQ_FRAME_BURST_COUNT);
@property (class, readonly) int CAP_PROP_XI_DEBOUNCE_EN NS_SWIFT_NAME(CAP_PROP_XI_DEBOUNCE_EN);
@property (class, readonly) int CAP_PROP_XI_DEBOUNCE_T0 NS_SWIFT_NAME(CAP_PROP_XI_DEBOUNCE_T0);
@property (class, readonly) int CAP_PROP_XI_DEBOUNCE_T1 NS_SWIFT_NAME(CAP_PROP_XI_DEBOUNCE_T1);
@property (class, readonly) int CAP_PROP_XI_DEBOUNCE_POL NS_SWIFT_NAME(CAP_PROP_XI_DEBOUNCE_POL);
@property (class, readonly) int CAP_PROP_XI_LENS_MODE NS_SWIFT_NAME(CAP_PROP_XI_LENS_MODE);
@property (class, readonly) int CAP_PROP_XI_LENS_APERTURE_VALUE NS_SWIFT_NAME(CAP_PROP_XI_LENS_APERTURE_VALUE);
@property (class, readonly) int CAP_PROP_XI_LENS_FOCUS_MOVEMENT_VALUE NS_SWIFT_NAME(CAP_PROP_XI_LENS_FOCUS_MOVEMENT_VALUE);
@property (class, readonly) int CAP_PROP_XI_LENS_FOCUS_MOVE NS_SWIFT_NAME(CAP_PROP_XI_LENS_FOCUS_MOVE);
@property (class, readonly) int CAP_PROP_XI_LENS_FOCUS_DISTANCE NS_SWIFT_NAME(CAP_PROP_XI_LENS_FOCUS_DISTANCE);
@property (class, readonly) int CAP_PROP_XI_LENS_FOCAL_LENGTH NS_SWIFT_NAME(CAP_PROP_XI_LENS_FOCAL_LENGTH);
@property (class, readonly) int CAP_PROP_XI_LENS_FEATURE_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_LENS_FEATURE_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_LENS_FEATURE NS_SWIFT_NAME(CAP_PROP_XI_LENS_FEATURE);
@property (class, readonly) int CAP_PROP_XI_DEVICE_MODEL_ID NS_SWIFT_NAME(CAP_PROP_XI_DEVICE_MODEL_ID);
@property (class, readonly) int CAP_PROP_XI_DEVICE_SN NS_SWIFT_NAME(CAP_PROP_XI_DEVICE_SN);
@property (class, readonly) int CAP_PROP_XI_IMAGE_DATA_FORMAT_RGB32_ALPHA NS_SWIFT_NAME(CAP_PROP_XI_IMAGE_DATA_FORMAT_RGB32_ALPHA);
@property (class, readonly) int CAP_PROP_XI_IMAGE_PAYLOAD_SIZE NS_SWIFT_NAME(CAP_PROP_XI_IMAGE_PAYLOAD_SIZE);
@property (class, readonly) int CAP_PROP_XI_TRANSPORT_PIXEL_FORMAT NS_SWIFT_NAME(CAP_PROP_XI_TRANSPORT_PIXEL_FORMAT);
@property (class, readonly) int CAP_PROP_XI_SENSOR_CLOCK_FREQ_HZ NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_CLOCK_FREQ_HZ);
@property (class, readonly) int CAP_PROP_XI_SENSOR_CLOCK_FREQ_INDEX NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_CLOCK_FREQ_INDEX);
@property (class, readonly) int CAP_PROP_XI_SENSOR_OUTPUT_CHANNEL_COUNT NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_OUTPUT_CHANNEL_COUNT);
@property (class, readonly) int CAP_PROP_XI_FRAMERATE NS_SWIFT_NAME(CAP_PROP_XI_FRAMERATE);
@property (class, readonly) int CAP_PROP_XI_COUNTER_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_COUNTER_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_COUNTER_VALUE NS_SWIFT_NAME(CAP_PROP_XI_COUNTER_VALUE);
@property (class, readonly) int CAP_PROP_XI_ACQ_TIMING_MODE NS_SWIFT_NAME(CAP_PROP_XI_ACQ_TIMING_MODE);
@property (class, readonly) int CAP_PROP_XI_AVAILABLE_BANDWIDTH NS_SWIFT_NAME(CAP_PROP_XI_AVAILABLE_BANDWIDTH);
@property (class, readonly) int CAP_PROP_XI_BUFFER_POLICY NS_SWIFT_NAME(CAP_PROP_XI_BUFFER_POLICY);
@property (class, readonly) int CAP_PROP_XI_LUT_EN NS_SWIFT_NAME(CAP_PROP_XI_LUT_EN);
@property (class, readonly) int CAP_PROP_XI_LUT_INDEX NS_SWIFT_NAME(CAP_PROP_XI_LUT_INDEX);
@property (class, readonly) int CAP_PROP_XI_LUT_VALUE NS_SWIFT_NAME(CAP_PROP_XI_LUT_VALUE);
@property (class, readonly) int CAP_PROP_XI_TRG_DELAY NS_SWIFT_NAME(CAP_PROP_XI_TRG_DELAY);
@property (class, readonly) int CAP_PROP_XI_TS_RST_MODE NS_SWIFT_NAME(CAP_PROP_XI_TS_RST_MODE);
@property (class, readonly) int CAP_PROP_XI_TS_RST_SOURCE NS_SWIFT_NAME(CAP_PROP_XI_TS_RST_SOURCE);
@property (class, readonly) int CAP_PROP_XI_IS_DEVICE_EXIST NS_SWIFT_NAME(CAP_PROP_XI_IS_DEVICE_EXIST);
@property (class, readonly) int CAP_PROP_XI_ACQ_BUFFER_SIZE NS_SWIFT_NAME(CAP_PROP_XI_ACQ_BUFFER_SIZE);
@property (class, readonly) int CAP_PROP_XI_ACQ_BUFFER_SIZE_UNIT NS_SWIFT_NAME(CAP_PROP_XI_ACQ_BUFFER_SIZE_UNIT);
@property (class, readonly) int CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_SIZE NS_SWIFT_NAME(CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_SIZE);
@property (class, readonly) int CAP_PROP_XI_BUFFERS_QUEUE_SIZE NS_SWIFT_NAME(CAP_PROP_XI_BUFFERS_QUEUE_SIZE);
@property (class, readonly) int CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_COMMIT NS_SWIFT_NAME(CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_COMMIT);
@property (class, readonly) int CAP_PROP_XI_RECENT_FRAME NS_SWIFT_NAME(CAP_PROP_XI_RECENT_FRAME);
@property (class, readonly) int CAP_PROP_XI_DEVICE_RESET NS_SWIFT_NAME(CAP_PROP_XI_DEVICE_RESET);
@property (class, readonly) int CAP_PROP_XI_COLUMN_FPN_CORRECTION NS_SWIFT_NAME(CAP_PROP_XI_COLUMN_FPN_CORRECTION);
@property (class, readonly) int CAP_PROP_XI_ROW_FPN_CORRECTION NS_SWIFT_NAME(CAP_PROP_XI_ROW_FPN_CORRECTION);
@property (class, readonly) int CAP_PROP_XI_SENSOR_MODE NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_MODE);
@property (class, readonly) int CAP_PROP_XI_HDR NS_SWIFT_NAME(CAP_PROP_XI_HDR);
@property (class, readonly) int CAP_PROP_XI_HDR_KNEEPOINT_COUNT NS_SWIFT_NAME(CAP_PROP_XI_HDR_KNEEPOINT_COUNT);
@property (class, readonly) int CAP_PROP_XI_HDR_T1 NS_SWIFT_NAME(CAP_PROP_XI_HDR_T1);
@property (class, readonly) int CAP_PROP_XI_HDR_T2 NS_SWIFT_NAME(CAP_PROP_XI_HDR_T2);
@property (class, readonly) int CAP_PROP_XI_KNEEPOINT1 NS_SWIFT_NAME(CAP_PROP_XI_KNEEPOINT1);
@property (class, readonly) int CAP_PROP_XI_KNEEPOINT2 NS_SWIFT_NAME(CAP_PROP_XI_KNEEPOINT2);
@property (class, readonly) int CAP_PROP_XI_IMAGE_BLACK_LEVEL NS_SWIFT_NAME(CAP_PROP_XI_IMAGE_BLACK_LEVEL);
@property (class, readonly) int CAP_PROP_XI_HW_REVISION NS_SWIFT_NAME(CAP_PROP_XI_HW_REVISION);
@property (class, readonly) int CAP_PROP_XI_DEBUG_LEVEL NS_SWIFT_NAME(CAP_PROP_XI_DEBUG_LEVEL);
@property (class, readonly) int CAP_PROP_XI_AUTO_BANDWIDTH_CALCULATION NS_SWIFT_NAME(CAP_PROP_XI_AUTO_BANDWIDTH_CALCULATION);
@property (class, readonly) int CAP_PROP_XI_FFS_FILE_ID NS_SWIFT_NAME(CAP_PROP_XI_FFS_FILE_ID);
@property (class, readonly) int CAP_PROP_XI_FFS_FILE_SIZE NS_SWIFT_NAME(CAP_PROP_XI_FFS_FILE_SIZE);
@property (class, readonly) int CAP_PROP_XI_FREE_FFS_SIZE NS_SWIFT_NAME(CAP_PROP_XI_FREE_FFS_SIZE);
@property (class, readonly) int CAP_PROP_XI_USED_FFS_SIZE NS_SWIFT_NAME(CAP_PROP_XI_USED_FFS_SIZE);
@property (class, readonly) int CAP_PROP_XI_FFS_ACCESS_KEY NS_SWIFT_NAME(CAP_PROP_XI_FFS_ACCESS_KEY);
@property (class, readonly) int CAP_PROP_XI_SENSOR_FEATURE_SELECTOR NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_FEATURE_SELECTOR);
@property (class, readonly) int CAP_PROP_XI_SENSOR_FEATURE_VALUE NS_SWIFT_NAME(CAP_PROP_XI_SENSOR_FEATURE_VALUE);
@property (class, readonly) int CAP_PROP_ARAVIS_AUTOTRIGGER NS_SWIFT_NAME(CAP_PROP_ARAVIS_AUTOTRIGGER);
@property (class, readonly) int CAP_PROP_ANDROID_DEVICE_TORCH NS_SWIFT_NAME(CAP_PROP_ANDROID_DEVICE_TORCH);
@property (class, readonly) int CAP_PROP_IOS_DEVICE_FOCUS NS_SWIFT_NAME(CAP_PROP_IOS_DEVICE_FOCUS);
@property (class, readonly) int CAP_PROP_IOS_DEVICE_EXPOSURE NS_SWIFT_NAME(CAP_PROP_IOS_DEVICE_EXPOSURE);
@property (class, readonly) int CAP_PROP_IOS_DEVICE_FLASH NS_SWIFT_NAME(CAP_PROP_IOS_DEVICE_FLASH);
@property (class, readonly) int CAP_PROP_IOS_DEVICE_WHITEBALANCE NS_SWIFT_NAME(CAP_PROP_IOS_DEVICE_WHITEBALANCE);
@property (class, readonly) int CAP_PROP_IOS_DEVICE_TORCH NS_SWIFT_NAME(CAP_PROP_IOS_DEVICE_TORCH);
@property (class, readonly) int CAP_PROP_GIGA_FRAME_OFFSET_X NS_SWIFT_NAME(CAP_PROP_GIGA_FRAME_OFFSET_X);
@property (class, readonly) int CAP_PROP_GIGA_FRAME_OFFSET_Y NS_SWIFT_NAME(CAP_PROP_GIGA_FRAME_OFFSET_Y);
@property (class, readonly) int CAP_PROP_GIGA_FRAME_WIDTH_MAX NS_SWIFT_NAME(CAP_PROP_GIGA_FRAME_WIDTH_MAX);
@property (class, readonly) int CAP_PROP_GIGA_FRAME_HEIGH_MAX NS_SWIFT_NAME(CAP_PROP_GIGA_FRAME_HEIGH_MAX);
@property (class, readonly) int CAP_PROP_GIGA_FRAME_SENS_WIDTH NS_SWIFT_NAME(CAP_PROP_GIGA_FRAME_SENS_WIDTH);
@property (class, readonly) int CAP_PROP_GIGA_FRAME_SENS_HEIGH NS_SWIFT_NAME(CAP_PROP_GIGA_FRAME_SENS_HEIGH);
@property (class, readonly) int CAP_PROP_INTELPERC_PROFILE_COUNT NS_SWIFT_NAME(CAP_PROP_INTELPERC_PROFILE_COUNT);
@property (class, readonly) int CAP_PROP_INTELPERC_PROFILE_IDX NS_SWIFT_NAME(CAP_PROP_INTELPERC_PROFILE_IDX);
@property (class, readonly) int CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE NS_SWIFT_NAME(CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE);
@property (class, readonly) int CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE NS_SWIFT_NAME(CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE);
@property (class, readonly) int CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD NS_SWIFT_NAME(CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD);
@property (class, readonly) int CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ NS_SWIFT_NAME(CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ);
@property (class, readonly) int CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT NS_SWIFT_NAME(CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT);
@property (class, readonly) int CAP_INTELPERC_DEPTH_GENERATOR NS_SWIFT_NAME(CAP_INTELPERC_DEPTH_GENERATOR);
@property (class, readonly) int CAP_INTELPERC_IMAGE_GENERATOR NS_SWIFT_NAME(CAP_INTELPERC_IMAGE_GENERATOR);
@property (class, readonly) int CAP_INTELPERC_IR_GENERATOR NS_SWIFT_NAME(CAP_INTELPERC_IR_GENERATOR);
@property (class, readonly) int CAP_INTELPERC_GENERATORS_MASK NS_SWIFT_NAME(CAP_INTELPERC_GENERATORS_MASK);
@property (class, readonly) int CAP_INTELPERC_DEPTH_MAP NS_SWIFT_NAME(CAP_INTELPERC_DEPTH_MAP);
@property (class, readonly) int CAP_INTELPERC_UVDEPTH_MAP NS_SWIFT_NAME(CAP_INTELPERC_UVDEPTH_MAP);
@property (class, readonly) int CAP_INTELPERC_IR_MAP NS_SWIFT_NAME(CAP_INTELPERC_IR_MAP);
@property (class, readonly) int CAP_INTELPERC_IMAGE NS_SWIFT_NAME(CAP_INTELPERC_IMAGE);
@property (class, readonly) int CAP_PROP_GPHOTO2_PREVIEW NS_SWIFT_NAME(CAP_PROP_GPHOTO2_PREVIEW);
@property (class, readonly) int CAP_PROP_GPHOTO2_WIDGET_ENUMERATE NS_SWIFT_NAME(CAP_PROP_GPHOTO2_WIDGET_ENUMERATE);
@property (class, readonly) int CAP_PROP_GPHOTO2_RELOAD_CONFIG NS_SWIFT_NAME(CAP_PROP_GPHOTO2_RELOAD_CONFIG);
@property (class, readonly) int CAP_PROP_GPHOTO2_RELOAD_ON_CHANGE NS_SWIFT_NAME(CAP_PROP_GPHOTO2_RELOAD_ON_CHANGE);
@property (class, readonly) int CAP_PROP_GPHOTO2_COLLECT_MSGS NS_SWIFT_NAME(CAP_PROP_GPHOTO2_COLLECT_MSGS);
@property (class, readonly) int CAP_PROP_GPHOTO2_FLUSH_MSGS NS_SWIFT_NAME(CAP_PROP_GPHOTO2_FLUSH_MSGS);
@property (class, readonly) int CAP_PROP_SPEED NS_SWIFT_NAME(CAP_PROP_SPEED);
@property (class, readonly) int CAP_PROP_APERTURE NS_SWIFT_NAME(CAP_PROP_APERTURE);
@property (class, readonly) int CAP_PROP_EXPOSUREPROGRAM NS_SWIFT_NAME(CAP_PROP_EXPOSUREPROGRAM);
@property (class, readonly) int CAP_PROP_VIEWFINDER NS_SWIFT_NAME(CAP_PROP_VIEWFINDER);
@property (class, readonly) int CAP_PROP_IMAGES_BASE NS_SWIFT_NAME(CAP_PROP_IMAGES_BASE);
@property (class, readonly) int CAP_PROP_IMAGES_LAST NS_SWIFT_NAME(CAP_PROP_IMAGES_LAST);

#pragma mark - Methods


//
//  String cv::videoio_registry::getBackendName(VideoCaptureAPIs api)
//
/**
 * Returns backend API name or "UnknownVideoAPI(xxx)"
 * @param api backend ID (#VideoCaptureAPIs)
 */
+ (NSString*)getBackendName:(VideoCaptureAPIs)api NS_SWIFT_NAME(getBackendName(api:));


//
//  vector_VideoCaptureAPIs cv::videoio_registry::getBackends()
//
    // Return type 'vector_VideoCaptureAPIs' is not supported, skipping the function


//
//  vector_VideoCaptureAPIs cv::videoio_registry::getCameraBackends()
//
    // Return type 'vector_VideoCaptureAPIs' is not supported, skipping the function


//
//  vector_VideoCaptureAPIs cv::videoio_registry::getStreamBackends()
//
    // Return type 'vector_VideoCaptureAPIs' is not supported, skipping the function


//
//  vector_VideoCaptureAPIs cv::videoio_registry::getStreamBufferedBackends()
//
    // Return type 'vector_VideoCaptureAPIs' is not supported, skipping the function


//
//  vector_VideoCaptureAPIs cv::videoio_registry::getWriterBackends()
//
    // Return type 'vector_VideoCaptureAPIs' is not supported, skipping the function


//
//  bool cv::videoio_registry::hasBackend(VideoCaptureAPIs api)
//
/**
 * Returns true if backend is available
 */
+ (BOOL)hasBackend:(VideoCaptureAPIs)api NS_SWIFT_NAME(hasBackend(api:));


//
//  bool cv::videoio_registry::isBackendBuiltIn(VideoCaptureAPIs api)
//
/**
 * Returns true if backend is built in (false if backend is used as plugin)
 */
+ (BOOL)isBackendBuiltIn:(VideoCaptureAPIs)api NS_SWIFT_NAME(isBackendBuiltIn(api:));


//
//  string cv::videoio_registry::getCameraBackendPluginVersion(VideoCaptureAPIs api, int& version_ABI, int& version_API)
//
/**
 * Returns description and ABI/API version of videoio plugin's camera interface
 */
+ (NSString*)getCameraBackendPluginVersion:(VideoCaptureAPIs)api version_ABI:(int*)version_ABI version_API:(int*)version_API NS_SWIFT_NAME(getCameraBackendPluginVersion(api:version_ABI:version_API:));


//
//  string cv::videoio_registry::getStreamBackendPluginVersion(VideoCaptureAPIs api, int& version_ABI, int& version_API)
//
/**
 * Returns description and ABI/API version of videoio plugin's stream capture interface
 */
+ (NSString*)getStreamBackendPluginVersion:(VideoCaptureAPIs)api version_ABI:(int*)version_ABI version_API:(int*)version_API NS_SWIFT_NAME(getStreamBackendPluginVersion(api:version_ABI:version_API:));


//
//  string cv::videoio_registry::getStreamBufferedBackendPluginVersion(VideoCaptureAPIs api, int& version_ABI, int& version_API)
//
/**
 * Returns description and ABI/API version of videoio plugin's buffer capture interface
 */
+ (NSString*)getStreamBufferedBackendPluginVersion:(VideoCaptureAPIs)api version_ABI:(int*)version_ABI version_API:(int*)version_API NS_SWIFT_NAME(getStreamBufferedBackendPluginVersion(api:version_ABI:version_API:));


//
//  string cv::videoio_registry::getWriterBackendPluginVersion(VideoCaptureAPIs api, int& version_ABI, int& version_API)
//
/**
 * Returns description and ABI/API version of videoio plugin's writer interface
 */
+ (NSString*)getWriterBackendPluginVersion:(VideoCaptureAPIs)api version_ABI:(int*)version_ABI version_API:(int*)version_API NS_SWIFT_NAME(getWriterBackendPluginVersion(api:version_ABI:version_API:));



@end

NS_ASSUME_NONNULL_END


