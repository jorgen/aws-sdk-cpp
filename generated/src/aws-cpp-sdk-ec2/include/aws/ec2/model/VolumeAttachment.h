﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VolumeAttachmentState.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes volume attachment details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VolumeAttachment">AWS
   * API Reference</a></p>
   */
  class VolumeAttachment
  {
  public:
    AWS_EC2_API VolumeAttachment();
    AWS_EC2_API VolumeAttachment(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VolumeAttachment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const{ return m_attachTime; }

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline bool AttachTimeHasBeenSet() const { return m_attachTimeHasBeenSet; }

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline void SetAttachTime(const Aws::Utils::DateTime& value) { m_attachTimeHasBeenSet = true; m_attachTime = value; }

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline void SetAttachTime(Aws::Utils::DateTime&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::move(value); }

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline VolumeAttachment& WithAttachTime(const Aws::Utils::DateTime& value) { SetAttachTime(value); return *this;}

    /**
     * <p>The time stamp when the attachment initiated.</p>
     */
    inline VolumeAttachment& WithAttachTime(Aws::Utils::DateTime&& value) { SetAttachTime(std::move(value)); return *this;}


    /**
     * <p>The device name.</p>
     */
    inline const Aws::String& GetDevice() const{ return m_device; }

    /**
     * <p>The device name.</p>
     */
    inline bool DeviceHasBeenSet() const { return m_deviceHasBeenSet; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(const Aws::String& value) { m_deviceHasBeenSet = true; m_device = value; }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(Aws::String&& value) { m_deviceHasBeenSet = true; m_device = std::move(value); }

    /**
     * <p>The device name.</p>
     */
    inline void SetDevice(const char* value) { m_deviceHasBeenSet = true; m_device.assign(value); }

    /**
     * <p>The device name.</p>
     */
    inline VolumeAttachment& WithDevice(const Aws::String& value) { SetDevice(value); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline VolumeAttachment& WithDevice(Aws::String&& value) { SetDevice(std::move(value)); return *this;}

    /**
     * <p>The device name.</p>
     */
    inline VolumeAttachment& WithDevice(const char* value) { SetDevice(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline VolumeAttachment& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline VolumeAttachment& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline VolumeAttachment& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The attachment state of the volume.</p>
     */
    inline const VolumeAttachmentState& GetState() const{ return m_state; }

    /**
     * <p>The attachment state of the volume.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The attachment state of the volume.</p>
     */
    inline void SetState(const VolumeAttachmentState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The attachment state of the volume.</p>
     */
    inline void SetState(VolumeAttachmentState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The attachment state of the volume.</p>
     */
    inline VolumeAttachment& WithState(const VolumeAttachmentState& value) { SetState(value); return *this;}

    /**
     * <p>The attachment state of the volume.</p>
     */
    inline VolumeAttachment& WithState(VolumeAttachmentState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the volume.</p>
     */
    inline VolumeAttachment& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the volume.</p>
     */
    inline VolumeAttachment& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the volume.</p>
     */
    inline VolumeAttachment& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline bool GetDeleteOnTermination() const{ return m_deleteOnTermination; }

    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline bool DeleteOnTerminationHasBeenSet() const { return m_deleteOnTerminationHasBeenSet; }

    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline void SetDeleteOnTermination(bool value) { m_deleteOnTerminationHasBeenSet = true; m_deleteOnTermination = value; }

    /**
     * <p>Indicates whether the EBS volume is deleted on instance termination.</p>
     */
    inline VolumeAttachment& WithDeleteOnTermination(bool value) { SetDeleteOnTermination(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline VolumeAttachment& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline VolumeAttachment& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_attachTime;
    bool m_attachTimeHasBeenSet = false;

    Aws::String m_device;
    bool m_deviceHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    VolumeAttachmentState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    bool m_deleteOnTermination;
    bool m_deleteOnTerminationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
