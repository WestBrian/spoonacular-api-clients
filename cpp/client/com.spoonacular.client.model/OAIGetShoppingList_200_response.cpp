/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIGetShoppingList_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGetShoppingList_200_response::OAIGetShoppingList_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGetShoppingList_200_response::OAIGetShoppingList_200_response() {
    this->initializeModel();
}

OAIGetShoppingList_200_response::~OAIGetShoppingList_200_response() {}

void OAIGetShoppingList_200_response::initializeModel() {

    m_aisles_isSet = false;
    m_aisles_isValid = false;

    m_cost_isSet = false;
    m_cost_isValid = false;

    m_start_date_isSet = false;
    m_start_date_isValid = false;

    m_end_date_isSet = false;
    m_end_date_isValid = false;
}

void OAIGetShoppingList_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGetShoppingList_200_response::fromJsonObject(QJsonObject json) {

    m_aisles_isValid = ::OpenAPI::fromJsonValue(aisles, json[QString("aisles")]);
    m_aisles_isSet = !json[QString("aisles")].isNull() && m_aisles_isValid;

    m_cost_isValid = ::OpenAPI::fromJsonValue(cost, json[QString("cost")]);
    m_cost_isSet = !json[QString("cost")].isNull() && m_cost_isValid;

    m_start_date_isValid = ::OpenAPI::fromJsonValue(start_date, json[QString("startDate")]);
    m_start_date_isSet = !json[QString("startDate")].isNull() && m_start_date_isValid;

    m_end_date_isValid = ::OpenAPI::fromJsonValue(end_date, json[QString("endDate")]);
    m_end_date_isSet = !json[QString("endDate")].isNull() && m_end_date_isValid;
}

QString OAIGetShoppingList_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGetShoppingList_200_response::asJsonObject() const {
    QJsonObject obj;
    if (aisles.size() > 0) {
        obj.insert(QString("aisles"), ::OpenAPI::toJsonValue(aisles));
    }
    if (m_cost_isSet) {
        obj.insert(QString("cost"), ::OpenAPI::toJsonValue(cost));
    }
    if (m_start_date_isSet) {
        obj.insert(QString("startDate"), ::OpenAPI::toJsonValue(start_date));
    }
    if (m_end_date_isSet) {
        obj.insert(QString("endDate"), ::OpenAPI::toJsonValue(end_date));
    }
    return obj;
}

QSet<OAIGetShoppingList_200_response_aisles_inner> OAIGetShoppingList_200_response::getAisles() const {
    return aisles;
}
void OAIGetShoppingList_200_response::setAisles(const QSet<OAIGetShoppingList_200_response_aisles_inner> &aisles) {
    this->aisles = aisles;
    this->m_aisles_isSet = true;
}

bool OAIGetShoppingList_200_response::is_aisles_Set() const{
    return m_aisles_isSet;
}

bool OAIGetShoppingList_200_response::is_aisles_Valid() const{
    return m_aisles_isValid;
}

double OAIGetShoppingList_200_response::getCost() const {
    return cost;
}
void OAIGetShoppingList_200_response::setCost(const double &cost) {
    this->cost = cost;
    this->m_cost_isSet = true;
}

bool OAIGetShoppingList_200_response::is_cost_Set() const{
    return m_cost_isSet;
}

bool OAIGetShoppingList_200_response::is_cost_Valid() const{
    return m_cost_isValid;
}

double OAIGetShoppingList_200_response::getStartDate() const {
    return start_date;
}
void OAIGetShoppingList_200_response::setStartDate(const double &start_date) {
    this->start_date = start_date;
    this->m_start_date_isSet = true;
}

bool OAIGetShoppingList_200_response::is_start_date_Set() const{
    return m_start_date_isSet;
}

bool OAIGetShoppingList_200_response::is_start_date_Valid() const{
    return m_start_date_isValid;
}

double OAIGetShoppingList_200_response::getEndDate() const {
    return end_date;
}
void OAIGetShoppingList_200_response::setEndDate(const double &end_date) {
    this->end_date = end_date;
    this->m_end_date_isSet = true;
}

bool OAIGetShoppingList_200_response::is_end_date_Set() const{
    return m_end_date_isSet;
}

bool OAIGetShoppingList_200_response::is_end_date_Valid() const{
    return m_end_date_isValid;
}

bool OAIGetShoppingList_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (aisles.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_cost_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_start_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_end_date_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGetShoppingList_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_aisles_isValid && m_cost_isValid && m_start_date_isValid && m_end_date_isValid && true;
}

} // namespace OpenAPI
