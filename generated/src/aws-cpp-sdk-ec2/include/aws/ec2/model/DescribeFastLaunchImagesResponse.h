﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DescribeFastLaunchImagesSuccessItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DescribeFastLaunchImagesResponse
  {
  public:
    AWS_EC2_API DescribeFastLaunchImagesResponse();
    AWS_EC2_API DescribeFastLaunchImagesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFastLaunchImagesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A collection of details about the fast-launch enabled Windows images that
     * meet the requested criteria.</p>
     */
    inline const Aws::Vector<DescribeFastLaunchImagesSuccessItem>& GetFastLaunchImages() const{ return m_fastLaunchImages; }

    /**
     * <p>A collection of details about the fast-launch enabled Windows images that
     * meet the requested criteria.</p>
     */
    inline void SetFastLaunchImages(const Aws::Vector<DescribeFastLaunchImagesSuccessItem>& value) { m_fastLaunchImages = value; }

    /**
     * <p>A collection of details about the fast-launch enabled Windows images that
     * meet the requested criteria.</p>
     */
    inline void SetFastLaunchImages(Aws::Vector<DescribeFastLaunchImagesSuccessItem>&& value) { m_fastLaunchImages = std::move(value); }

    /**
     * <p>A collection of details about the fast-launch enabled Windows images that
     * meet the requested criteria.</p>
     */
    inline DescribeFastLaunchImagesResponse& WithFastLaunchImages(const Aws::Vector<DescribeFastLaunchImagesSuccessItem>& value) { SetFastLaunchImages(value); return *this;}

    /**
     * <p>A collection of details about the fast-launch enabled Windows images that
     * meet the requested criteria.</p>
     */
    inline DescribeFastLaunchImagesResponse& WithFastLaunchImages(Aws::Vector<DescribeFastLaunchImagesSuccessItem>&& value) { SetFastLaunchImages(std::move(value)); return *this;}

    /**
     * <p>A collection of details about the fast-launch enabled Windows images that
     * meet the requested criteria.</p>
     */
    inline DescribeFastLaunchImagesResponse& AddFastLaunchImages(const DescribeFastLaunchImagesSuccessItem& value) { m_fastLaunchImages.push_back(value); return *this; }

    /**
     * <p>A collection of details about the fast-launch enabled Windows images that
     * meet the requested criteria.</p>
     */
    inline DescribeFastLaunchImagesResponse& AddFastLaunchImages(DescribeFastLaunchImagesSuccessItem&& value) { m_fastLaunchImages.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use for the next set of results. This value is null when there
     * are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use for the next set of results. This value is null when there
     * are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use for the next set of results. This value is null when there
     * are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use for the next set of results. This value is null when there
     * are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use for the next set of results. This value is null when there
     * are no more results to return.</p>
     */
    inline DescribeFastLaunchImagesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use for the next set of results. This value is null when there
     * are no more results to return.</p>
     */
    inline DescribeFastLaunchImagesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use for the next set of results. This value is null when there
     * are no more results to return.</p>
     */
    inline DescribeFastLaunchImagesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeFastLaunchImagesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeFastLaunchImagesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DescribeFastLaunchImagesSuccessItem> m_fastLaunchImages;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
