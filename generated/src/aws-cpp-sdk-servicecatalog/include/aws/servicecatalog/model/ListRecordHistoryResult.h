﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/RecordDetail.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListRecordHistoryResult
  {
  public:
    AWS_SERVICECATALOG_API ListRecordHistoryResult();
    AWS_SERVICECATALOG_API ListRecordHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListRecordHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The records, in reverse chronological order.</p>
     */
    inline const Aws::Vector<RecordDetail>& GetRecordDetails() const{ return m_recordDetails; }

    /**
     * <p>The records, in reverse chronological order.</p>
     */
    inline void SetRecordDetails(const Aws::Vector<RecordDetail>& value) { m_recordDetails = value; }

    /**
     * <p>The records, in reverse chronological order.</p>
     */
    inline void SetRecordDetails(Aws::Vector<RecordDetail>&& value) { m_recordDetails = std::move(value); }

    /**
     * <p>The records, in reverse chronological order.</p>
     */
    inline ListRecordHistoryResult& WithRecordDetails(const Aws::Vector<RecordDetail>& value) { SetRecordDetails(value); return *this;}

    /**
     * <p>The records, in reverse chronological order.</p>
     */
    inline ListRecordHistoryResult& WithRecordDetails(Aws::Vector<RecordDetail>&& value) { SetRecordDetails(std::move(value)); return *this;}

    /**
     * <p>The records, in reverse chronological order.</p>
     */
    inline ListRecordHistoryResult& AddRecordDetails(const RecordDetail& value) { m_recordDetails.push_back(value); return *this; }

    /**
     * <p>The records, in reverse chronological order.</p>
     */
    inline ListRecordHistoryResult& AddRecordDetails(RecordDetail&& value) { m_recordDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListRecordHistoryResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListRecordHistoryResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListRecordHistoryResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<RecordDetail> m_recordDetails;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
