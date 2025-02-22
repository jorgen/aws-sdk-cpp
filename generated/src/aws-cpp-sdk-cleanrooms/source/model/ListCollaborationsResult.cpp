﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListCollaborationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCollaborationsResult::ListCollaborationsResult()
{
}

ListCollaborationsResult::ListCollaborationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollaborationsResult& ListCollaborationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("collaborationList"))
  {
    Aws::Utils::Array<JsonView> collaborationListJsonList = jsonValue.GetArray("collaborationList");
    for(unsigned collaborationListIndex = 0; collaborationListIndex < collaborationListJsonList.GetLength(); ++collaborationListIndex)
    {
      m_collaborationList.push_back(collaborationListJsonList[collaborationListIndex].AsObject());
    }
  }



  return *this;
}
