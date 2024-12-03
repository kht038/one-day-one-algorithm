# one-day-one-algorithm
# API Group: Inquiry API

## Inquiry API

### 1.1 문의 생성

- kind: Mutation

- API 이름: createInquiry

- **API 설명**: 사용자가 문의를 생성합니다.

| **요청(Request)** | **타입**            | **필수 여부** | **설명**      |
| ----------------- | ------------------- | ------------- | ------------- |
| `title`           | String              | 필수          | 문의 제목     |
| `companyName`     | String              | 선택          | 회사 이름     |
| `managerName`     | String              | 필수          | 담당자 이름   |
| `contact`         | String              | 필수          | 연락처        |
| `email`           | String              | 필수          | 사용자 이메일 |
| `kind`            | String              | 필수          | 문의 종류     |
| `body`            | String              | 필수          | 문의 내용     |
| `attachments`     | [AttachmentInputGq] | 선택          | 첨부 파일     |

| **응답(Response)** |
| ------------------ |

| `
{
  "id": "inquiry1",
  "title": "문의 제목",
  "createdAt": "2023-01-01T12:00:00Z",
  "companyName": "회사명",
  "managerName": "담당자명",
  "contact": "010-1234-5678",
  "email": "user@example.com",
  "kind": "문의 종류",
  "body": "문의 내용",
  "attachments": [
    { "id": "att1", "name": "첨부파일1", "url": "http://example.com/att1" },
    { "id": "att2", "name": "첨부파일2", "url": "http://example.com/att2" }
  ]
}`
|

**비고**: -

---

### 1.2 문의 단건 조회

- kind: Query

- API 이름: readInquiry

- **API 설명**: 문의 폼의 접수 단건을 조회합니다.

| **요청(Request)** | **타입** | **필수 여부** | **설명** |
| ----------------- | -------- | ------------- | -------- |
| `id`              | String   | 필수          | 문의 ID  |

| **응답(Response)** |
| ------------------ |

| `{
  "id": "inquiry1",
  "title": "문의 제목",
  "createdAt": "2023-01-01T12:00:00Z",
  "companyName": "회사명",
  "managerName": "담당자명",
  "contact": "010-1234-5678",
  "email": "user@example.com",
  "kind": "문의 종류",
  "body": "문의 내용",
  "attachments": [
    { "id": "att1", "name": "첨부파일1", "url": "http://example.com/att1" },
    { "id": "att2", "name": "첨부파일2", "url": "http://example.com/att2" }
  ]
}` |

**비고**: 관리자 권한 필요.

---

### 1.3 문의 목록 조회

- kind: Query

- API 이름: readInquiries

- **API 설명**: 문의 폼의 접수 목록을 조회하며, 페이지네이션을 지원합니다.

| **요청(Request)** | **타입** | **필수 여부** | **설명**            |
| ----------------- | -------- | ------------- | ------------------- |
| `skip`            | Number   | 필수          | 건너뛸 항목 수      |
| `limit`           | Number   | 필수          | 최대 가져올 항목 수 |

| **응답(Response)** |
| ------------------ |

| `{
  "totalCount": 100,
  "edges": [
    {
      "node": {
        "id": "inquiry1",
        "title": "문의 제목",
        "createdAt": "2023-01-01T12:00:00Z",
        "companyName": "회사명",
        "managerName": "담당자명",
        "contact": "010-1234-5678",
        "email": "user@example.com",
        "kind": "문의 종류",
        "body": "문의 내용",
        "attachments": [
          { "id": "att1", "name": "첨부파일1", "url": "http://example.com/att1" },
          { "id": "att2", "name": "첨부파일2", "url": "http://example.com/att2" }
        ]
      }
    }
  ]
}` |

**비고**: 관리자 권한 필요.

---

### 1.4 문의 종류 조회

- kind: Query

- API 이름: readInquiryKindTree

- **API 설명**: 문의 폼의 종류 카테고리 데이터를 조회합니다.

| **요청(Request)** | **타입** | **필수 여부** | **설명** |
| ----------------- | -------- | ------------- | -------- |
| 없음              | 없음     | -             | -        |

| **응답(Response)** |
| ------------------ |

| `{
  "id": "kind1",
  "label": "문의 종류",
  "children": null,
  "targetEmail": "main@example.com",
  "disabled": false
}` |

| `{
  "id": "kind1",
  "label": "문의 종류",
  "children": [
    {
      "id": "kind2",
      "label": "세부 종류",
      "children": null,
      "targetEmail": "detail@example.com",
      "disabled": false
    }
  ],
  "targetEmail": "main@example.com",
  "disabled": false
}` |

**비고**: -

---

### 1.5 문의 삭제

- kind: Mutation

- API 이름: deleteInquiry

- **API 설명**: 문의 폼의 특정 항목을 삭제합니다.

| **요청(Request)** | **타입** | **필수 여부** | **설명**       |
| ----------------- | -------- | ------------- | -------------- |
| `id`              | String   | 필수          | 삭제할 문의 ID |

| **응답(Response)** |
| ------------------ |
| `{ "empty": "" }`  |

**비고**: 관리자 권한 필요.
