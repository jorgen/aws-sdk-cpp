﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeSchemasResponse">AWS
   * API Reference</a></p>
   */
  class DescribeSchemasResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeSchemasResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeSchemasResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeSchemasResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeSchemasResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The described schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSchemas() const{ return m_schemas; }

    /**
     * <p>The described schema.</p>
     */
    inline void SetSchemas(const Aws::Vector<Aws::String>& value) { m_schemas = value; }

    /**
     * <p>The described schema.</p>
     */
    inline void SetSchemas(Aws::Vector<Aws::String>&& value) { m_schemas = std::move(value); }

    /**
     * <p>The described schema.</p>
     */
    inline DescribeSchemasResult& WithSchemas(const Aws::Vector<Aws::String>& value) { SetSchemas(value); return *this;}

    /**
     * <p>The described schema.</p>
     */
    inline DescribeSchemasResult& WithSchemas(Aws::Vector<Aws::String>&& value) { SetSchemas(std::move(value)); return *this;}

    /**
     * <p>The described schema.</p>
     */
    inline DescribeSchemasResult& AddSchemas(const Aws::String& value) { m_schemas.push_back(value); return *this; }

    /**
     * <p>The described schema.</p>
     */
    inline DescribeSchemasResult& AddSchemas(Aws::String&& value) { m_schemas.push_back(std::move(value)); return *this; }

    /**
     * <p>The described schema.</p>
     */
    inline DescribeSchemasResult& AddSchemas(const char* value) { m_schemas.push_back(value); return *this; }

  private:

    Aws::String m_marker;

    Aws::Vector<Aws::String> m_schemas;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
