﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class DescribeTagsResult
  {
  public:
    AWS_WORKSPACES_API DescribeTagsResult();
    AWS_WORKSPACES_API DescribeTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline DescribeTagsResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline DescribeTagsResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline DescribeTagsResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline DescribeTagsResult& AddTagList(Tag&& value) { m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Tag> m_tagList;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
