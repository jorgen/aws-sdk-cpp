﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ExistingObjectReplicationStatus.h>
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
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Optional configuration to replicate existing source bucket objects. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-what-is-isnot-replicated.html#existing-object-replication">Replicating
   * Existing Objects</a> in the <i>Amazon S3 User Guide</i>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/ExistingObjectReplication">AWS
   * API Reference</a></p>
   */
  class ExistingObjectReplication
  {
  public:
    AWS_S3CRT_API ExistingObjectReplication();
    AWS_S3CRT_API ExistingObjectReplication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CRT_API ExistingObjectReplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p/>
     */
    inline const ExistingObjectReplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p/>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStatus(const ExistingObjectReplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p/>
     */
    inline void SetStatus(ExistingObjectReplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p/>
     */
    inline ExistingObjectReplication& WithStatus(const ExistingObjectReplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p/>
     */
    inline ExistingObjectReplication& WithStatus(ExistingObjectReplicationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    ExistingObjectReplicationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
